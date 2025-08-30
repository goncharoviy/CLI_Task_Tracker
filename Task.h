#include <iostream>
#include <fstream>
#include <list>
#include <ctime>
#include <cstring>

#include "TaskTools.h"

namespace taskmanager
{
enum STATUS
{
    PLAN = 0,
    IN_PROGRESS = 1,
    DONE = 2,
    CLOSED = 3,
    REOPENED = 4
};

class Task
{
private:
    uint task_id;
    ushort status;
    std::string description;
    tm creating_time;
public:
};

}



