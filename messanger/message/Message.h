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
    void send(Contact* contact);

    string from = User.id; // holds User ID
    string to = Contact.id;   // holds Contact ID
    string message;



};


#endif //MESSENGER_IMITATOR_MESSAGE_H