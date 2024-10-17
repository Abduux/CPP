#include <iostream>
#include "Phonebook.hpp"

int main(int ac, char *argv[])
{
    // read input and check 
    //     ADD    --> read the input from the user and add a contact if valid 
    //     SEARCH --> display the current contacts in the phonebook 
    //     EXIT   --> quit the app  

    Phonebook fb;
    fb.size = 0;
    std::string input;
    while (1)
    {
        std::cout << "====================" << std::endl;
        std::cout << "ENTER YOUR COMMAND : " << std::endl;
        std::cout << "====================" << std::endl;
        std::cin >> input;
        if(input == "ADD")
            fb.AddContact();
        else if (input == "SEARCH")
            fb.SearchContact();
        else if (input == "EXIT" || std::cin.eof())
            fb.Exit();
        std::cin.clear();
        /* code */
    }
    return (0);
}