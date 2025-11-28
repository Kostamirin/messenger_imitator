// Created by kleymuner on 22.11.2025.

#ifndef MESSENGER_IMITATOR_MESSAGE_H
#define MESSENGER_IMITATOR_MESSAGE_H

#include <string>
#include <vector>
#include "../user/User.h"

class User;
using namespace std;
class Message;
class EachUserHistory;


class EachUserHistory
{
public:
    User* who;
    vector<Message> messages;

};

class Message
{
public:
    void send(User* who);

    string from; // Both of them are holding user IDs
    string to;

    string message;



};


#endif //MESSENGER_IMITATOR_MESSAGE_H