#include "Contact.hpp"


class	Phonebook {
	public :
		Contact	contacts[8];
		int 	size;

	int		AddContact();
	void	SearchContact();
	void	Exit();
};