
#include <iostream>

std::string Format(std::string str)
{
    if(str.length() > 10)
        return (str.substr(0, 9) + ".");
    return str;
}

int AllNumbers(std::string str)
{
	int i = 0;
	while(str[i])
	{
		if(!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

std::string removeTaps(std::string str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == '\t')
			str[i] = ' ';
		i++;
	}
	return str;
}