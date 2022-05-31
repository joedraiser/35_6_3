#include <iostream>
#include <filesystem>

int main()
{


    auto recursiveGetFileNamesByExtension = [](std::filesystem::path path, const std::string extension)
    {
        for(auto& p: std::filesystem::recursive_directory_iterator(path))
            if(is_regular_file(p.path()))
                if(!p.path().extension().compare(extension))
                    std::cout << p.path() << '\n';
    };

    recursiveGetFileNamesByExtension("C:\\DIR", ".a" );
}