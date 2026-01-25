// Created by kleymuner on 22.11.2025.

#ifndef MESSENGER_IMITATOR_MESSENGER_H
#define MESSENGER_IMITATOR_MESSENGER_H

#include "user/User.h"
#include "message/Message.h"

#include <iostream>
#include <sqlite3.h> // you could need next library - libsqlite3-dev

class Messenger
{
public:
    Messenger();
    ~Messenger();
    void taught_notes();

    int choice;

    void create_local_database();
    void import_local_database(User);
    void change_local_database();

private:
    void welcome_screen();
    void setup();
    void save_messenger();
    void receive_message(Server* Server);

    void checkSQLiteResult(int result) {
        if (result != SQLITE_OK) {
            std::cerr << "Ошибка: " << sqlite3_errmsg(nullptr) << std::endl;
            sqlite3_close(nullptr);
            exit(1);
        }
    }

    User* Admin;
    EachUserHistory* MessageHistory;

    sqlite3* local_database;
};


#endif //MESSENGER_IMITATOR_MESSENGER_H