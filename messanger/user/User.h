// Created by kleymuner on 22.11.2025.

#ifndef MESSENGER_IMITATOR_USER_H
#define MESSENGER_IMITATOR_USER_H

#include <string>
#include <vector>
#include <map>

#include "../message/Message.h"
class User_public;


class User
{
public:
    User();
    ~User();


    string name;
    string local_name;
    string bio;
    string id;

    vector<User_public*> contacts;
    vector<EachUserHistory> chat_history;

    void receive_messaage(string messsage, string id);

private:
    void id_generation();
};

class Contact
{
public:
    string public_name;
    string local_name;
    string id;
};

using namespace std;


#endif //MESSENGER_IMITATOR_USER_H