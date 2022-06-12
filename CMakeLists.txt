cmake_minimum_required(VERSION 3.21)
project(75MustDoLeetCode)

set(CMAKE_INCLUDE_CURRENT_DIR ON)


set(CMAKE_CXX_STANDARD 14)
add_executable(${PROJECT_NAME} main.cpp)


add_subdirectory(search_in_a_roated_sorted_array)
add_subdirectory(container_with_most_water)
add_subdirectory(3sum)
add_subdirectory(LongestPalindromicSubstring)
add_subdirectory(ClimbingStairs)
add_subdirectory(mergeTwoSortedLists)
add_subdirectory(LCS)
add_subdirectory(slidingMax)
add_subdirectory(ValidateSubsequence)
add_subdirectory(Nonc)
add_subdirectory(canConstructDP)
add_subdirectory(SortingAlgorithms)

Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.0.0-preview5
)

FetchContent_MakeAvailable(Catch2)