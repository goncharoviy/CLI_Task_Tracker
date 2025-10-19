cmake_minimum_required(VERSION 3.6)

project(cli_task_tracker
        VERSION 1.0.0
)

set (cli_task_tracker_src
    main.cpp
    task.cpp
    manager.cpp
)

add_executable(${PROJECT_NAME} ${cli_task_tracker_src})

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_CURRENT_SOURCE_DIR}/task_list.json ${CMAKE_CURRENT_BINARY_DIR}/task_list.json)

target_include_directories(${PROJECT_NAME} PRIVATE include)
