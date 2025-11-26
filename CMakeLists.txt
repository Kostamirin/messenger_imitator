cmake_minimum_required(VERSION 4.0)
project(messenger_imitator)

set(CMAKE_CXX_STANDARD 20)

add_executable(messenger_imitator main.cpp
        messanger/messenger.cpp
        messanger/Messenger.h
        messanger/user/user.cpp
        messanger/user/User.h
        messanger/message/Message.h
        messanger/message/Message.cpp
        messanger/message/Message.h)
