#include <iostream> // connect head files
#include <string>

int
main()
{
  std::string name; // создаем переменную имени (create new field)
  std::cout << "Enter your name: ";
  std::getline(
    std::cin,
    name); // используем getline, т.к обычный cin считывает только до пробела (use getline, because std::cin read only for space)
  std::cout << "Hello world from " << name
            << std::endl; // выводим результат в консоль (print result)
  return 0;
}