#pragma once
#include "Message.h"
#include <string>
#include <vector>
#include <memory>

using namespace std;


class User {
	string login;
	string password;
	string name;
	vector<shared_ptr<Message>> messages;

public:
	User(string login, string password, string name);
	string get_login() const;
	string get_name() const;
	bool verify_password(string input) const;
};

