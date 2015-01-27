#ifndef PARSE_H
#define PARSE_H
#include <iostream>

enum MessageType {
	ASSIGNMENT = 0,
	STATUS = 1,
	UNKNOWN = 99
};
enum MessageCommand {
	GRANT = 0,
	CONTINUE = 1
};
struct TrunkMessage{
	MessageType message_type;
	MessageCommand message_command;
	double freq;
	long talkgroup;
};


class TrunkParser {
	TrunkMessage parse_message(std::string s);
};
#endif