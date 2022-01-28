#include "administrator.h"
#include<iostream>

void administrator::browse_book(book *a, int num)
{
	int i;
	cout << "bookname            ISBN          reserve condition         borrow condition        borrow-date          expiration-date" << endl;
	for (i = 0; i < num; i++)
	{

		a[i].show_information();
	}
}

void administrator::add_book(book *a, int num)
{
	int i;
	int success = 0;

	string name;
	string ISBN;

	cout << "Please enter the book name:" << endl;
	cin >> name;
	cout << "Please enter the ISBN number:" << endl;
	cin >> ISBN;
	/*check repeatation, the condition is that both bookname and ISBN are the same*/
	for (i = 0; i < num; i++)
	{
		if (a[i].get_bookname() == name && a[i].get_ISBN() == ISBN)
		{
			cout << "Sorry, one book with the same name and ISBN has already been in this system" << endl;
			system("pause");
			system("cls");
			success = 2;
			break;
		}
		else if(a[i].get_bookname() == "Not Given" && a[i].get_bookname().length() == 9)
		{
			a[i].set_bookname_ISBN(name, ISBN);
			cout << "You add a new book successfully!" << endl;
			success = 1;
			system("pause");
			system("cls");

			break;
		}
	}
	if (success == 0)
	{
		cout << "There is no free space to add book" << endl;
		system("pause");
	}

}

void administrator::delete_book(book *a, int num)
{
	string name;
	string ISBN;
	int i;
	bool success = 0;

	cout << "Please enter the ISBN number of the book you want to delete:" << endl;
	cin >> ISBN;
	cout << "Please enter the book name of the book you want to delete:" << endl;
	cin >> name;

	for (i = 0; i < num; i++)
	{
		if (a[i].get_bookname() == name && a[i].get_ISBN() == ISBN)
		{
			a[i].set_bookname_ISBN("Not Given", "Not Given");  /*not really delete the information from the file*/
			success = 1;                                       /*it is still in, but  will not be displayed*/
			break;
		}
	}
	if(success == 1)
		cout << "You delete the information successfully!" << endl;
	else
		cout << "There is no such book" << endl;
	system("pause");
	
}

void administrator::update_book(book *a, int num)
{
	string ISBN;
	string name;
	string new_name;
	string new_ISBN;
	int i;
	bool success = 0;


	cout << "Please enter the ISBN number of the book you want to update: " << endl;
	cin >> ISBN;
	cout << "Please enter the book name of the book you want to update: " << endl;
	cin >> name;
	cout << "Please enter the new ISBN number of the book you want to update: " << endl;
	cin >> new_ISBN;
	cout << "Please enter the new name of the book you want to update: " << endl;
	cin >> new_name;
	for (i = 0; i < num; i++)
	{
		if (a[i].get_bookname() == name && a[i].get_ISBN() == ISBN)
		{
			a[i].set_bookname_ISBN(new_name, new_ISBN);
			success = 1;
			break;
		}
	}
	if(success == 1)
		cout << "You update the information successfully!" << endl;
	else
		cout << "There is no such book" << endl;
	system("pause");
}

void administrator::search_book(book *a, int num)
{
	int i;
	int success = 0;

	string name;
	cout << "Please enter the book name you want to search" << endl;
	cin >> name;

	for (i = 0; i < num; i++)
	{
		if (a[i].get_bookname() == name)
		{
			cout << "Here is the information of the book" << endl;
			cout << "bookname         ISBN          reserve condition         borrow condition        borrow-date          expiration-data" << endl;
			a[i].show_information();
			success = 1;
			system("pause");
			break;
		}
	}
	if (success == 0)
	{
		cout << "There is no such book" << endl;
		system("pause");
	}
}

void administrator::browse_user(student *a, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{

		a[i].show_information();
	}
	system("pause");
}

void administrator::browse_user(staff *a, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{

		a[i].show_information();
	}
	system("pause");
}

void administrator::search_user(student *a, int num)
{
	int i;
	int success = 0;

	long ID;
	cout << "Please enter the id number of the student you want to search" << endl;
	cin >> ID;

	for (i = 0; i < num; i++)
	{
		if (a[i].get_ID() == ID)
		{
			cout << "Here is the information of the student" << endl;
			a[i].show_information();
			success = 1;
			system("pause");
			break;
		}
	}
	if (success == 0)
	{
		cout << "There is no such student" << endl;
		system("pause");
	}

}

void administrator::search_user(staff *a, int num)
{
	int i;
	int success = 0;

	long ID;
	cout << "Please enter the id number of the staff you want to search" << endl;
	cin >> ID;

	for (i = 0; i < num; i++)
	{
		if (a[i].get_ID() == ID)
		{
			cout << "Here is the information of the staff" << endl;
			a[i].show_information();
			success = 1;
			system("pause");
			break;
		}
	}
	if (success == 0)
	{
		cout << "There is no such staff" << endl;
		system("pause");
	}
}

void administrator::add_user(student *a, int num)
{
	int i;
	int success = 0;

	string name;
	long ID;

	cout << "Please enter the student name:" << endl;
	cin >> name;
	cout << "Please enter the ID number:" << endl;
	cin >> ID;
	/*check repeatation, the condition is that both bookname and ISBN are the same*/
	for (i = 0; i < num; i++)
	{
		if (a[i].get_name() == name && a[i].get_ID() == ID)
		{
			cout << "Sorry, one student with the same name and ID has already been in this system" << endl;
			system("pause");
			system("cls");
			success = 2;
			break;
		}
		else if (a[i].get_name() == "Not Given" && a[i].get_name().length() == 9)
		{
			a[i].set_name_ID(name, ID);
			cout << "You add a new student successfully!" << endl;
			success = 1;
			system("pause");
			system("cls");

			break;
		}
	}
	if (success == 0)
	{
		cout << "There is no free space to add the student" << endl;
		system("pause");
	}

}

void administrator::add_user(staff *a, int num)
{
	int i;
	int success = 0;

	string name;
	long ID;

	cout << "Please enter the staff name:" << endl;
	cin >> name;
	cout << "Please enter the ID number:" << endl;
	cin >> ID;
	/*check repeatation, the condition is that both bookname and ISBN are the same*/
	for (i = 0; i < num; i++)
	{
		if (a[i].get_name() == name && a[i].get_ID() == ID)
		{
			cout << "Sorry, one staff with the same name and ID has already been in this system" << endl;
			system("pause");
			system("cls");
			success = 2;
			break;
		}
		else if (a[i].get_name() == "Not Given" && a[i].get_name().length() == 9)
		{
			a[i].set_name_ID(name, ID);
			cout << "You add a new staff successfully!" << endl;
			success = 1;
			system("pause");
			system("cls");

			break;
		}
	}
	if (success == 0)
	{
		cout << "There is no free space to add the staff" << endl;
		system("pause");
	}

}

void administrator::delete_user(student *a, int num)
{
	string name;
	long ID;
	int i;
	bool success = 0;

	cout << "Please enter the ID number of the student you want to delete:" << endl;
	cin >> ID;
	cout << "Please enter the name of the studnet you want to delete:" << endl;
	cin >> name;

	for (i = 0; i < num; i++)
	{
		if (a[i].get_name() == name && a[i].get_ID() == ID)
		{
			a[i].set_name_ID("Not Given", 0);
			success = 1;
			break;
		}
	}
	if (success == 1)
		cout << "You delete the information successfully!" << endl;
	else
		cout << "There is no such student" << endl;
	system("pause");
}

void administrator::delete_user(staff *a, int num)
{
	string name;
	long ID;
	int i;
	bool success = 0;

	cout << "Please enter the ID number of the staff you want to delete:" << endl;
	cin >> ID;
	cout << "Please enter the name of the staff you want to delete:" << endl;
	cin >> name;

	for (i = 0; i < num; i++)
	{
		if (a[i].get_name() == name && a[i].get_ID() == ID)
		{
			a[i].set_name_ID("Not Given", 0);
			success = 1;
			break;
		}
	}
	if (success == 1)
		cout << "You delete the information successfully!" << endl;
	else
		cout << "There is no such staff" << endl;
	system("pause");
}

void administrator::update_user(student *a, int num)
{
	long ID;
	string name;
	string new_name;
	long new_ID;
	int i;
	bool success = 0;


	cout << "Please enter the ID number of the student you want to update: " << endl;
	cin >> ID;
	cout << "Please enter the name of the student you want to update: " << endl;
	cin >> name;
	cout << "Please enter the new ID number of the student you want to update: " << endl;
	cin >> new_ID;
	cout << "Please enter the new name of the student you want to update: " << endl;
	cin >> new_name;
	for (i = 0; i < num; i++)
	{
		if (a[i].get_name() == name && a[i].get_ID() == ID)
		{
			a[i].set_name_ID(new_name, new_ID);
			success = 1;
			break;
		}
	}
	if (success == 1)
		cout << "You update the information successfully!" << endl;
	else
		cout << "There is no such student" << endl;
	system("pause");
}

void administrator::update_user(staff *a, int num)
{
	long ID;
	string name;
	string new_name;
	long new_ID;
	int i;
	bool success = 0;


	cout << "Please enter the ID number of the staff you want to update: " << endl;
	cin >> ID;
	cout << "Please enter the name of the staff you want to update: " << endl;
	cin >> name;
	cout << "Please enter the new ID number of the staff you want to update: " << endl;
	cin >> new_ID;
	cout << "Please enter the new name of the staff you want to update: " << endl;
	cin >> new_name;
	for (i = 0; i < num; i++)
	{
		if (a[i].get_name() == name && a[i].get_ID() == ID)
		{
			a[i].set_name_ID(new_name, new_ID);
			success = 1;
			break;
		}
	}
	if (success == 1)
		cout << "You update the information successfully!" << endl;
	else
		cout << "There is no such staff" << endl;
	system("pause");
}



