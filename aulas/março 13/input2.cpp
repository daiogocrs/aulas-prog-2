#include <iostream>

int main(int argc, char *argv[])
{
    for(int i=0; i<argc; i++)
    {
        std::cout << "Parametro #: " << i << " :" << argv[i] << std::endl;
    }

    return 0;
}