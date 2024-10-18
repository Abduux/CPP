#include "Phonebook.hpp"
#include <iomanip>

// void PhoneBook::addContact() {
//     Contact newContact;
//     std::string input;
    
//     std::cout << "Enter first name: ";
//     std::getline(std::cin, input);
//     newContact.setFirstName(input);

//     // Repeat for other fields: last name, nickname, etc.

//     // Add contact to the array (replace the oldest if full)
//     contacts[contactCount % 8] = newContact;
//     contactCount++;
// }


void Phonebook::AddContact()     //loop on te informations and save them if valid 
{
    Contact new_Contact;
    std::string input = "";
    std::cout << "ENTER YOUR FIRST NAME : \n";
    std::getline(std::cin, input);
    new_Contact.SetFirstName(input);

    std::cout << "ENTER YOUR LAST NAME : \n";
    std::getline(std::cin, input);
    new_Contact.SetLastName(input);

    std::cout << "ENTER YOUR NICKNAME : \n";
    std::getline(std::cin, input);
    new_Contact.SetNickName(input);

    std::cout << "ENTER YOUR PHONENUMBER : \n";
    std::getline(std::cin, input);
    new_Contact.SetPhoneNumber(input);

    std::cout << "ENTER YOUR DARKSHIT : \n";
    std::getline(std::cin, input);
    new_Contact.SetDarkSecret(input);

    contacts[size % 8] = new_Contact;
    size ++ ;
}

void Phonebook::SearchContact()
{
    int i = 0;
    std::cout << "|FIRSTNAME |LASTNAME  |NICKNAME  |NUMBER   | DARKEST |" << std::endl;
    while(i < size) // display all contacts
    {
        std::cout << std::setw(10) << contacts[i].GetFirstName() << "|";
        std::cout << std::setw(10) << contacts[i].GetLastName() << "|";
        std::cout << std::setw(10) << contacts[i].GetNickName() << "|";
        std::cout << std::setw(10) << contacts[i].GetPhoneNumber() << "|";
        std::cout << std::setw(10) << contacts[i].GetDarkSecret() << "|" << std::endl;
        i++;
    }
    // and let the user pick a number to display
}
