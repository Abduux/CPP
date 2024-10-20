/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:06:32 by ahraich           #+#    #+#             */
/*   Updated: 2024/10/20 12:30:52 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main() {
    Phonebook	pbook;
    std::string	command = "";

    while (command != "EXIT" && !std::cin.eof())
	{
		std::cout << "\033[32mEnter a command (ADD, SEARCH, EXIT): \033[0m";
		std::getline(std::cin >> std::ws, command);
		if(std::cin.eof())
			break;
		if (command == "ADD")
			pbook.AddContact();
		else if (command == "SEARCH")
				pbook.SearchContact();
	}
	return (0);
}
