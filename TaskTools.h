#include <iostream>
#include <jsoncpp/json/json.h>

namespace taskmanager
{
class TaskTools
{
public:
    void to_json();
    void from_json();
};
}