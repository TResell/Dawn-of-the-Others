cmake_minimum_required(VERSION 3.24.0)
project("Dawn_of_the_Others" NONE)
enable_language(C)

add_executable(${PROJECT_NAME} src/main.c src/player.c)


# pdcurses library
find_path(PDC_INCLUDES curses.h)
find_library(PDC_LIBS pdcurses REQUIRED)

target_include_directories(${PROJECT_NAME} PRIVATE ${PDC_INCLUDES})
target_link_libraries(${PROJECT_NAME} PRIVATE ${PDC_LIBS})
