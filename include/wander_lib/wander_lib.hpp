#include <iostream>
#include <string>

class wander_lib {
public:
	wander_lib();
	void greet();
	void set_grt_msg(std::string msg) { greeting_messages = msg; }
	std::string get_grt_msg() { return greeting_messages; }

private:
	std::string greeting_messages;
};