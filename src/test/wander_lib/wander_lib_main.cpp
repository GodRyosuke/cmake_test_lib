#include "wander_lib/wander_lib.hpp"
#include <assert.h>
#include <exception>

bool greeting_test()
{
	wander_lib* wl = new wander_lib();
	wl->greet();
	std::string test_msg = "hello wander!";
	wl->set_grt_msg(test_msg);

	return (test_msg == wl->get_grt_msg());
}

int main(int argc, char** argv)
{
	assert(greeting_test());

	std::cout << "all tests passed!" << std::endl;
	return 0;
}