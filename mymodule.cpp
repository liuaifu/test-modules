#include "mymodule.hpp"
#include <string>
#include <iostream>
#include <utility>


std::string get_string() {
	std::string str{ "hello, world!" };
	return std::move(str);
}

void print(const std::string& str) {
	std::cout << str << std::endl;
}
