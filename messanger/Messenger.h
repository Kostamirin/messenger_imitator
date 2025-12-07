// Created by kleymuner on 22.11.2025.

#ifndef MESSENGER_IMITATOR_MESSENGER_H
#define MESSENGER_IMITATOR_MESSENGER_H

#include "user/User.h"
#include "message/Message.h"

#include <fstream>


class Messenger
{
public:
    Messenger();
    ~Messenger();
    void taught_notes();

    int choice;

    void create_local_database();
    void import_local_database();
    void change_local_database();

private:
    void welcome_screen();
    void setup();
    void save_messenger();
    void receive_message(Server* Server);

    User* Admin;
    EachUserHistory* MessageHistory;

    std::ofstream local_database;
};


#endif //MESSENGER_IMITATOR_MESSENGER_H