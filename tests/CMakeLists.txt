include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/e2239ee6043f73722e7aa812a459f54a28552929.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(Sources
    mainWindowTest.cpp)

enable_testing()

add_executable(ut ${Sources})
target_link_libraries(ut gtest_main ${PROJECT_NAME}-lib)
target_compile_options(ut PUBLIC -Wall -Wextra -Werror -Wpedantic -Wconversion)
