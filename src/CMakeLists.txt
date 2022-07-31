set(Sources
    mainWindow.cpp)

add_library(${PROJECT_NAME}-lib STATIC ${Sources})  

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)
target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Wextra -Werror -Wpedantic -Wconversion -O3)
