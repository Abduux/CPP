#include <iostream>
#include "Phonebook.hpp"

int main() {
    Phonebook	pbook;
    std::string	command;
    while (command != "EXIT")
	{
		std::cout << "\033[32mEnter a command (ADD, SEARCH, EXIT): \033[0m";
		std::getline(std::cin >> std::ws, command);
		if(std::cin.eof())
			break;
		if (command == "ADD")
			pbook.AddContact();
		else if (command == "SEARCH")
				pbook.SearchContact();
	}
	return (0);
}
