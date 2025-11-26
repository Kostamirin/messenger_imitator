// Created by kleymuner on 22.11.2025.

#ifndef MESSENGER_IMITATOR_USER_H
#define MESSENGER_IMITATOR_USER_H

#include <string>
#include <vector>
#include <map>

#include "../message/Message.h"

using namespace std;

class User
{
public:
    User();
    ~User();


    string name;
    string local_name;
    string bio;
    string id;

    map<User*, EachUserHistory*> contacts;
    MessageHistory chat_history;

private:
    void id_generation();
};


#endif //MESSENGER_IMITATOR_USER_H