# Define the source files for your application
set(APP_SOURCES
    main.cpp
    Game.cpp
)

# Create a library from your application code
add_library(${projectName}_lib ${APP_SOURCES})

# Include directories for the library
target_include_directories(${projectName}_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)

# Link raylib library to your app library
target_link_libraries(${projectName}_lib PUBLIC raylib)

# Create the main executable, including the compiled resource object
add_executable(${projectName} main.cpp ${RC_OBJ})

# Link the application library and raylib into the main executable
target_link_libraries(${projectName} PRIVATE ${projectName}_lib)