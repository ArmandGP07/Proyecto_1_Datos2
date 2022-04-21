cmake_minimum_required(VERSION 3.22)
project(Proyecto_1_Datos_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Proyecto_1_Datos_2
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        Proyecto_1_Datos_2.pro
        servermain.cpp
        servermain.h
        servidor.cpp
        servidor.h)
