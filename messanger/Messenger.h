// Created by kleymuner on 22.11.2025.

#ifndef MESSENGER_IMITATOR_MESSENGER_H
#define MESSENGER_IMITATOR_MESSENGER_H

#include "user/User.h"
#include "message/Message.h"
#include <iostream>



class Messenger
{
public:
    Messenger();
    ~Messenger();
    void taught_notes();
    int choice;

private:
    void welcome_screen();
    void setup();
    void save_messenger();
    User* Admin;
    MessageHistory* MessageHistory;
};


#endif //MESSENGER_IMITATOR_MESSENGER_H