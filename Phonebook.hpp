#include "Contact.hpp"


class	Phonebook {
	private :
		Contact	contacts[8];
		int 	size;
		int		EmptyData(Contact new_contact);
	public:
		Phonebook();
		void	AddContact();
		void	SearchContact();
};
