#include "Contact.hpp"

// Setters ------------------------------------

void Contact::SetFirstName(std::string new_name)
{
    this->FirstName = new_name;
}

void Contact::SetLastName(std::string new_lastname)
{
    this->LastName = new_lastname;
}

void Contact::SetNickName(std::string new_nickname)
{
    this->NickName = new_nickname;
}

void Contact::SetPhoneNumber(std::string new_number)
{
    this->PhoneNumber = new_number;
}

void Contact::SetDarkSecret(std::string new_dark)
{
    this->DarkSecret = new_dark;
}

// Getters ------------------------------------

std::string Contact::GetFirstName() const
{
    return (this->FirstName);
}

std::string Contact::GetLastName() const
{
    return (this->LastName);
}

std::string Contact::GetNickName() const
{
    return (this->NickName);
}

std::string Contact::GetPhoneNumber() const
{
    return (this->PhoneNumber);
}

std::string Contact::GetDarkSecret() const
{
    return (this->DarkSecret);
}