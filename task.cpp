#include "task.h"

using namespace ns_tasks;

int16_t task::set_new_task_id()
{
    int16_t new_id;

    return new_id;
}

task::task(std::string task_name, std::string task_description)
{
    id = set_new_task_id();
    name = task_name;
    decription = task_description;
    status = task_status::to_do;
}
