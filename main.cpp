#include <iostream>
#include "Phonebook.hpp"

int main() {
    Phonebook pbook;
    std::string command;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): "<< std::endl;
        std::getline(std::cin, command);
        if (command == "ADD")
            pbook.AddContact();
        else if (command == "SEARCH")
            pbook.SearchContact();
        else if(std::cin.eof() || command == "EXIT")
            return (0);
    }
    return 0;
}