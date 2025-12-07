// Created by kleymuner on 22.11.2025.


#include "Messenger.h"


Messenger::Messenger()
{
    this->welcome_screen();
    this->setup();
}

Messenger::~Messenger()
{

}

// DATABASE FUNCTIONS
void Messenger::create_local_database()
{
    int result = sqlite3_open("local_database.db", &this->local_database);



    sqlite3_close(this->local_database);

}

void Messenger::change_local_database()
{

}

void Messenger::import_local_database()
{

}


void Messenger::receive_message(Server* Server)
{
    // There's nothing here
}

// MESSENGER FUNCTIONS
void Messenger::welcome_screen()
{
    cout <<"Welcome to Messenger!" <<endl;
    cout <<"Choose the option: " <<endl;
    cout <<"1. Create new account" <<endl;
    cout <<"2. Import existed database" <<endl;
    cout <<"Choice: " ;
    cin >> this->choice;
}

void Messenger::setup()
{
    cout <<"Enter your name: ";
    cin >>Admin->name;
    cout <<endl;
    std::cout <<"Enter your bio (Optional): ";
    cin >>Admin->bio;
}

