cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME SnakeGame)
project(${PROJECT_NAME})


set(CMAKE_AUTOMOC ON) # QT related
set(CMAKE_AUTOUIC ON) # QT related
set(CMAKE_AUTORCC ON) # QT related


find_package(Qt6 REQUIRED Widgets)

set(HEADERS
    include/game.h
    include/player.h
)

set(SOURCES
    main.cpp
    src/game.cpp
    src/player.cpp
)

# include_directories(include)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)