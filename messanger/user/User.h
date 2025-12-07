// Created by kleymuner on 22.11.2025.

#ifndef MESSENGER_IMITATOR_USER_H
#define MESSENGER_IMITATOR_USER_H

#include <string>
#include <vector>
#include <map>

#include "../message/Message.h"
#include "../../server/Server.h"

class EachUserHistory;
using namespace std;

class Contact;


class Contact
{
public:
    string public_name;
    string local_name;
    string id;
};

class User
{
private:
    static string id_generation();

public:
    User();
    ~User();

    string name;
    string local_name;
    string bio;
    string id = this->id_generation();

    vector<Contact*> contacts;
    vector<EachUserHistory*> chat_history;

    void receive_messaage(Server* server);


};



#endif //MESSENGER_IMITATOR_USER_H