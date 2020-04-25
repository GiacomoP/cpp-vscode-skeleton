#include "myfun.h"
#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const std::string &word : msg)
    {
        std::cout << word << " ";
    }
    std::cout << myFunction(3) << std::endl;
    return 0;
}