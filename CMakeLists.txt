cmake_minimum_required(VERSION 3.29)
project(ExamenParcial2)

set(CMAKE_CXX_STANDARD 14)

include_directories(Ejercicio1Num)

add_executable(Ej1
    Ejercicio1Num/Ejercicio1.cpp
    Ejercicio1Num/Ejercicio1.h)

add_executable(Ej2
    Ejercicio2Dia/Ejercicio2.cpp
    Ejercicio2Dia/Ejercicio2.h)

add_executable(Ej3
    Ejercicio3Prom/Ejercicio3.cpp
    Ejercicio3Prom/Ejercicio3.h)