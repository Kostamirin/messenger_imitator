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
    void tught_notes();

private:
    void setup();
    void save_messenger();
    User* Admin;
    MessageHistory* MessageHistory;
};


#endif //MESSENGER_IMITATOR_MESSENGER_H