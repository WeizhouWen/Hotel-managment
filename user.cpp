#include <iostream>
#include"user.h"



long user::get_ID()
{
	return ID;// return the ID of the user
}

string user::get_name()
{

	return name;
}

int user::get_fine()
{
	return fine;
}

void user::set_ID(long inputID)
{
	ID = inputID;
}

void user::set_name(string a)
{
	name = a;
}

void user::set_fine(int a)
{
	fine = a;
}

void user::show_information()
{
	if (name != "Not Given")
	{
		cout << "********************************" << endl;
		cout << "name:" << name << endl;
		cout << "ID:" << ID << endl;
		cout << "The user has borrowed " << numOfbook << "book" << endl;
		if (fine > 0)
		{
			cout << "The student should be fined for " << fine << "dollar" << endl;
		}
		else
		{
			cout << "The student's book have not expired" << endl;
		}
		cout << "********************************" << endl;
	}
}

void user::set_numOfbook(int num)
{
	numOfbook = num;
}

int user::get_numOfbook()
{
	return numOfbook;
}

void user::set_name_ID(string a, long b)
{
	name = a;
	ID = b;
}