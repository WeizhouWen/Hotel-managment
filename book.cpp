#include"book.h"
#include<iostream>


string book::get_bookname(void)
{ 
	return bookname;
}

string book::get_ISBN(void)
{
	return ISBN;
}

bool book::get_reserve(void)
{
	return reserve;
}

bool book::get_borrow(void)
{
	return borrow;
}

void book::set_bookname(string a)
{
	bookname = a;
}

void book::set_ISBN(string a)
{
	ISBN = a;
}

void book::set_bookname_ISBN(string a, string b)
{
	bookname = a;
	ISBN = b;
}

void book::set_reserve(bool a)
{
	reserve = a;
}

void book::set_borrow(bool a)
{
	borrow = a;
}

void book::reserve_condition(void)
{
	if (reserve == 1)
		cout << "reserved";
	else
		cout << "available";
}

void book::borrow_condition(void)
{
	if (borrow == 1)
		cout << "borrowed";
	else
		cout << "available";
}

void book::transform_date(int a)
{
	cout << a / 10000 << "-" << (a / 100) % 100 << "-" << a % 100;
}

void book::show_information(void)/*bookname     ISBN     reserve condition     borrow condition     two data*/
{
	if (bookname != "Not Given" && bookname != "None")
	{
		cout << bookname << "                 " << ISBN << "             ";
		reserve_condition();
		cout << "                  ";
		borrow_condition();
		if (borrow == 1)
		{
			transform_date(borrow_data);
			cout << "           ";
			transform_date(expiration_data);
		}
		cout << "\n";
	}
}








