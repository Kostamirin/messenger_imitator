//
// Created by kleymuner on 28.11.2025.
//

#ifndef MESSENGER_IMITATOR_SERVER_H
#define MESSENGER_IMITATOR_SERVER_H

#include <vector>
#include "../messanger/user/User.h"

class Server {
public:
    Server();
    ~Server();

    string get_public_name(string id);
    vector<User*> getUsers();

};


#endif //MESSENGER_IMITATOR_SERVER_H