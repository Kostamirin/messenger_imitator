//
// Created by kleymuner on 22.11.2025.
//

#ifndef MESSENGER_IMITATOR_MESSENGER_H
#define MESSENGER_IMITATOR_MESSENGER_H

#include "user/User.h"
#include "message/Message.h"
#include <iostream>



class Messanger
{
public:
    Messanger();
    ~Messanger();

private:
    void setup();
    User* User;
    MessageHistory* MessageHistory;
};


#endif //MESSENGER_IMITATOR_MESSENGER_H