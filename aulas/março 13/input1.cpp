#include <iostream>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cout << "Error. Usage is Exec Directory" << std::endl;
        return 1;
    }

    std::cout << "Executable: " << argv[0] << std::endl;
    std::cout << "Param 1: " << argv[1] << std::endl;

    return 0;
}