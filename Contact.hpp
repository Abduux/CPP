
#ifndef _CONTACT_HPP
#define _CONTACT_HPP

#include <iostream>

class Contact {

	private:
		std::string FirstName;
		std::string LastName;
		std::string PhoneNumber;
		std::string NickName;
		std::string DarkSecret;
	public:
		void SetFirstName(std::string name);
		void SetLastName(std::string lastname);
		void SetPhoneNumber(std::string PhoneNumber);
		void SetNickName(std::string NickName);
		void SetDarkSecret(std::string DarkSecret);

		std::string GetFirstName() const;
		std::string GetLastName() const;
		std::string GetPhoneNumber() const;
		std::string GetNickName() const;
		std::string GetDarkSecret() const;
};

#endif
