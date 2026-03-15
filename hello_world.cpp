#include <iostream> // подключаем заголовочные файлы
#include <string>

int main() {
	std::string name; // создаем переменную имени
	std::cout << "Enter your name: ";
	std::getline(cin, name); // используем geline, т.к обычный cin считывает только до пробела
	std::cout << "Hello world from " << name << std::endl; // выводим результат в консоль
	return 0;
}