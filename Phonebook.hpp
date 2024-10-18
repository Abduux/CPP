#include "Contact.hpp"


class	Phonebook {
	private :
		Contact	contacts[8];
		int 	size;

	public:
		void	AddContact();
		void	SearchContact();
};