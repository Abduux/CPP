#include "Phonebook.hpp"
#include <iomanip>


int Phonebook::AddContact()     //loop on te informations and save them if valid 
{
    std::string input = "";
    std::cout << "ENTER YOUR FIRST NAME : \n";
    std::cin  >> input;
    contacts[size % 8].SetFirstName(input);

    std::cout << "ENTER YOUR LAST NAME : \n";
    std::cin  >> input;
    contacts[size % 8].SetLastName(input);

    std::cout << "ENTER YOUR NICKNAME : \n";
    std::cin  >> input;
    contacts[size % 8].SetNickName(input);

    std::cout << "ENTER YOUR PHONENUMBER : \n";
    std::cin  >> input;
    contacts[size % 8].SetPhoneNumber(input);

    std::cout << "ENTER YOUR DARKSHIT : \n";
    std::cin  >> input;
    contacts[size % 8].SetDarkSecret(input);
    size ++ ;
    return (0);
}

void Phonebook::SearchContact()
{
    int i = 0;
    while(i < size) // display all contacts
    {
        std::cout << "|FIRSTNAME |LASTNAME  |NICKNAME  | PHONENUMBER | DARKEST |" << std::endl;
        std::cout << std::setw(10) << contacts[i].GetFirstName() << "|";
        std::cout << std::setw(10) << contacts[i].GetLastName() << "|";
        std::cout << std::setw(10) << contacts[i].GetNickName() << "|";
        std::cout << std::setw(10) << contacts[i].GetPhoneNumber() << "|";
        std::cout << std::setw(10) << contacts[i].GetDarkSecret() << "|" << std::endl;
        i++;
    }
    // and let the user pick a number to display
}

void Phonebook::Exit()
{
    exit(0);
}