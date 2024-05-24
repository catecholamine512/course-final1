#pragma once
#include "User.h"
#include <string>
#include <memory>

using namespace std;


class Message {
	shared_ptr<User> sender;
	shared_ptr<User> receiver;
	string body;

public:
	Message(User* sender, User* receiver, string body);
	shared_ptr<User> get_sender() const;
	shared_ptr<User> get_receiver() const;
	string get_body() const;
};

