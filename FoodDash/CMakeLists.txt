cmake_minimum_required(VERSION 3.26)
project(FoodDash)

set(CMAKE_CXX_STANDARD 17)

add_executable(FoodDash main.cpp
        MenuItem.cpp
        MenuItem.h
        Order.cpp
        Order.h
        DeliveryOrder.cpp
        DeliveryOrder.h
        Restaurant.cpp
        Restaurant.h)
