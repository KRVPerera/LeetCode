

project(search_in_a_roated_sorted_array)

set(SOURCE_FILES Solution.cpp Solution.h)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(search_in_a_roated_sorted_array ${SOURCE_FILES})

add_executable(testsRotatedArray test.cpp Solution.cpp Solution.h)
target_link_libraries(testsRotatedArray PRIVATE Catch2::Catch2WithMain)