project(ValidateSubsequence)

set(SOURCE_FILES Solution.cpp)

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(test_${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(test_${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain)