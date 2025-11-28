// Created by kleymuner on 22.11.2025.

#ifndef MESSENGER_IMITATOR_MESSAGE_H
#define MESSENGER_IMITATOR_MESSAGE_H

#include <string>
#include <vector>

#include "../user/User.h"
#include "../../server/Server.h"

using namespace std;

class Message;
class EachUserHistory;
User* me;


class EachUserHistory
{
public:
    User* who;
    vector<Message> messages;

};

class Message
{
public:
    void send(Contact* receiver);

    string from = me->id; // holds User ID
    string message;



};


#endif //MESSENGER_IMITATOR_MESSAGE_H