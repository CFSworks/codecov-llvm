#include <iostream>
#include <vector>

extern void say_goodbye(std::string &to);

int main(int argc, char *argv[])
{
	std::vector<std::string> args(argv + 1, argv + argc);

	if (args.size() == 0) {
		std::cout << "Hello, world" << std::endl;
	} else if (args.size() >= 2 && args[0] == "-g") {
		say_goodbye(args[1]);
	} else {
		std::cout << "Hello, " << args[0] << std::endl;
	}

	return 0;
}
