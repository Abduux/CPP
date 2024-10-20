#include "Phonebook.hpp"
#include <iomanip>

std::string Format(std::string str);
int AllNumbers(std::string str);
std::string removeTaps(std::string str);

Phonebook::Phonebook()
{
    this->size = 0;
}

int Phonebook::EmptyData(Contact new_contact)
{
    int EmptyField = 0;
    if(new_contact.GetFirstName().empty() && ++EmptyField )
        std::cerr << "❌[ERROR] empty first name \n";
    if(new_contact.GetLastName().empty() && ++EmptyField)
        std::cerr << "❌[ERROR] empty last name \n";
    if(new_contact.GetNickName().empty() && ++EmptyField)
        std::cerr << "❌[ERROR] empty nickname \n";
    if((!AllNumbers(new_contact.GetPhoneNumber()) && ++EmptyField)  || new_contact.GetPhoneNumber().empty())
        std::cerr << "❌[ERROR] empty or invalid phone number \n";
    if(new_contact.GetDarkSecret().empty() && ++EmptyField)
        std::cerr << "❌[ERROR] empty darkest secret \n";
    if(EmptyField > 0)
        return (1);
    return (0);
}

void Phonebook::AddContact()     //loop on te informations and save them if valid 
{
    Contact new_Contact;
    std::string input;

    std::cout << "ENTER YOUR FIRST NAME  : ";
    std::getline(std::cin >> std::ws, input);
    new_Contact.SetFirstName(removeTaps(input));

    std::cout << "ENTER YOUR LAST NAME   : ";
    std::getline(std::cin >> std::ws, input);
    new_Contact.SetLastName(removeTaps(input));

    std::cout << "ENTER YOUR NICKNAME    : ";
    std::getline(std::cin>> std::ws, input);
    new_Contact.SetNickName(removeTaps(input));

    std::cout << "ENTER YOUR PHONENUMBER : ";
    std::getline(std::cin>> std::ws, input);
    new_Contact.SetPhoneNumber(input);

    std::cout << "ENTER YOUR DARKSHIT    : ";
    std::getline(std::cin>> std::ws, input);
    new_Contact.SetDarkSecret(removeTaps(input));

    if(EmptyData(new_Contact))
        return ;
    contacts[size % 8] = new_Contact;
    size ++ ;
}

void Phonebook::SearchContact()
{
    int i = 0;
    int index = 0;

    if (size == 0)
    {
        std::cout << "❌[ERROR] No contacts available\n";
        return ;
    }
    std::cout << "|-------------------------------------------|\n";
    std::cout << "|     INDEX|     FIRST|      LAST|  NICKNAME|\n";
    std::cout << "|-------------------------------------------|\n";
    while(i < size && i < 8) // display all contacts
    {
        std::cout << "|" << std::setw(10) << i ;
        std::cout << "|" << std::setw(10) << Format(contacts[i].GetFirstName());
        std::cout << "|" << std::setw(10) << Format(contacts[i].GetLastName());
        std::cout << "|" << std::setw(10) << Format(contacts[i].GetNickName())<< "|" << std::endl;
        std::cout << "|-------------------------------------------|\n";
        i++;
    }
    while (true)
    {
        std::cout << "Enter contact index: ";
        std::cin >> index;
        if(std::cin.eof())
            return;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "❌NO CHARACTERS ALLOWED❌\n";
        }
        else if (index >= 0 && index < i)
        {
			std::cout << "-------------------------------------------\n";
            std::cout << "✔ First Name     : " << contacts[index].GetFirstName() << std::endl;
            std::cout << "✔ Last Name      : " << contacts[index].GetLastName() << std::endl;
            std::cout << "✔ Nick Name      : " << contacts[index].GetNickName() << std::endl;
            std::cout << "✔ Phone NUmber   : " << contacts[index].GetPhoneNumber() << std::endl;
            std::cout << "✔ Darkest Secret : " << contacts[index].GetDarkSecret() << std::endl;
			std::cout << "-------------------------------------------\n";
			std::cin.clear();
            return ;
        }
        else
            std::cerr << "❌NOT A VALID INDEX TRY AGAIN :❌\n";
    }
}
