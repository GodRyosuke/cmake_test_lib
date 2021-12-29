#include "wander_lib/wander_lib.hpp"

wander_lib::wander_lib()
	:greeting_messages("initial messages")
{

}

void wander_lib::greet()
{
	std::cout << greeting_messages << std::endl;
}
