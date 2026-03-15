#include <iostream> // connect head files
#include <string>

int main() {
	std::string name; // create new field
	std::cout << "Enter your name: ";
	std::getline(cin, name); // use getline, because std::cin read only for space
	std::cout << "Hello world from " << name << std::endl; // print result
	return 0;
}