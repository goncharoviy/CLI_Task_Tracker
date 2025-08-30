#include <iostream>
#include "Task.h"

namespace taskmanager
{
class TaskManager
{
private:
    
public:
    TaskManager();
    ~TaskManager();

    void Creating_Task();
    void Change_Status();
    void Add_Description();
    void Delete_Task();
    void Show_Current_Task();
    void Show_All_Tasks();
};
    
}
