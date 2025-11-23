//
// Created by kleymuner on 22.11.2025.
//

#ifndef MESSENGER_IMITATOR_MESSAGE_H
#define MESSENGER_IMITATOR_MESSAGE_H

#include <string>
#include <vector>
#include "../user/User.h"

using namespace std;
class Message;
class EachUserHistory;


class MessageHistory
{
public:
    vector<EachUserHistory*> main_history;
};

class EachUserHistory
{
public:
    User what_user;
    vector<Message> messages;

};

class Message
{
public:
    Message();

    string message;
    string id; // Needed to send each message


};


#endif //MESSENGER_IMITATOR_MESSAGE_H