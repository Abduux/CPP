#include "Contact.hpp"

class Phonebook {
    public :
        Contact contacts[8];
        int index;

    int AddContact();
    void SearchContact();
    void Exit();
};