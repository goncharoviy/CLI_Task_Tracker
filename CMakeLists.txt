cmake_minimum_required(VERSION 2.8)

project(cli_task_manager)

add_executable(cli_task_manager)

include_directories(headers)

find_package(JsonCpp REQUIRED)

target_link_libraries(cli_task_manager jsoncpp_lib)