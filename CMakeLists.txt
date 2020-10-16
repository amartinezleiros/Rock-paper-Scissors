cmake_minimum_required(VERSION 3.0.0)
project(Rock Paper Scissors VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Rock Paper Scissors main.cpp jugador.cpp jugador1.cpp jugadorIA.cpp partida.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
