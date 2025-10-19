#include <iostream>
#include <fstream>
#include <cassert>

#include "task.h"
#include "manager.h"

int main(int argc, char **argv)
{
    std::ifstream read_json;
    read_json.open("task_list.json", std::ios::binary);
    if (!read_json.is_open())
    {
        std::cerr << "json not open" << std::endl;
        std::abort();
    }
    else
    {
        std::string line;
        while (std::getline(read_json, line))
        {
            std::cout << line << std::endl;
        }
    }


    return EXIT_SUCCESS;
}
