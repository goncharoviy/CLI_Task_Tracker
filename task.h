#include <iostream>
#include <cstring>
#include <cstdint>
#include <memory>
#include <fstream>

namespace ns_tasks {


enum task_status
{
    to_do = 0, ///< Статус
    in_progress = 1,
    completed = 2
};

/// Класс для компонента "Задача"
class task
{
    int16_t id; ///< Номер задачи
    std::string name; ///< Наименование задачи
    std::string decription; ///< Описание
    task_status status; ///< Статус задачи.

    std::unique_ptr<std::ofstream> reading_json;

    /// @brief Метод для установки номера для новой задачи
    /// @return Уникальный номер задачи
    int16_t set_new_task_id();

    /// @brief Метод для конвертации номера статуса в текст
    /// @return
    std::string converter_statnum_2_text();
public:
    task(std::string task_name, std::string task_description);
    ~task();


}; // task

} // ns_tasks
