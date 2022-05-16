cmake_minimum_required(VERSION 3.21)
project(75MustDoLeetCode)

set(CMAKE_INCLUDE_CURRENT_DIR ON)


set(CMAKE_CXX_STANDARD 14)
add_executable(${PROJECT_NAME} main.cpp LeetCode2Solution.cpp LeetCode2Solution.h)


add_subdirectory(search_in_a_roated_sorted_array)

Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.0.0-preview5
)

FetchContent_MakeAvailable(Catch2)

add_executable(testsLCS TestLCS_2.cpp LeetCode2Solution.cpp LeetCode2Solution.h)
target_link_libraries(testsLCS PRIVATE Catch2::Catch2WithMain)