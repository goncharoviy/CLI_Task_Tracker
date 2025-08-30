#include <iostream>
#include "Task.h"

namespace taskmanager
{
class TaskManager
{
private:
    int Creating_Task();
    int Change_Status();
    void addDescription();
    int Deleting_Task();    
public:


    TaskManager();
    ~TaskManager();
};
    
}
