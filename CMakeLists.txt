cmake_minimum_required(VERSION 3.16.0)
project(Calculadora C CXX)

#set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)

# Include Catch2
include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v2.13.7
)
FetchContent_MakeAvailable(Catch2)

include(CTest)
enable_testing()

# Create an executable for your main program
add_executable(main main.cpp)

# Create an executable for your unit tests
add_executable(tests Test.cpp SimpleCalc.cpp)

# Link Catch2 to your test executable
target_link_libraries(tests Catch2::Catch2)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
