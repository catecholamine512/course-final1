#pragma once
#include "User.h"
#include "Message.h"
#include <vector>
#include <memory>

using namespace std;


class Chat {
	vector<shared_ptr<User>> users;
	vector<shared_ptr<Message>> messages;

public:
	Chat();
	void add_user(string login, string password, string name);
	shared_ptr<User> get_user(string login);
	void send_message(string sender, string receiver, string message);
};

