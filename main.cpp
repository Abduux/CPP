#include <iostream>
#include "Contact.hpp"
#include "Phonebook.hpp"

int main(int ac, char *argv[])
{
    // read input and check 
    //     ADD    --> read the input from the user and add a contact if valid 
    //     SEARCH --> display the current contacts in the phonebook 
    //     EXIT   --> quit the app  

    Phonebook fb;
    std::string COMAND;
    while (1)
    {
        std::cout << "====================" << std::endl;
        std::cout << "ENTER YOUR COMMAND : " << std::endl;
        std::cout << "====================" << std::endl;
        std::cin >> COMAND;
        if(COMAND == "ADD")
            fb.AddContact();
        else if (COMAND == "SEARCH")
            fb.SearchContact();
        else if (COMAND == "EXIT")
            fb.Exit();
        else 
            std::cout << COMAND <<" Not a Valid Command" << std::endl;
        /* code */
    }
    return (0);
}