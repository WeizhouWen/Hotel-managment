#ifndef BOOK_H
#define BOOK_H
#include <string>

using namespace std;

class book
{
private:
	string bookname;
	string ISBN;
	bool reserve;
	bool borrow;
	long int borrow_ID;
	int borrow_data;
	int expiration_data;

public:
	book()
	{
		ISBN = "Not Given";
		bookname = "Not Given";
		reserve = 0;
		borrow = 0;
		borrow_data = 20190512;
		expiration_data = 20190513;
		borrow_ID = 0;
	}
	string get_bookname(void);  /*get_ are used to get the basic information of the class such as ISBN*/
	string get_ISBN(void);      /*set_ are used to change the data member of the class such as ISBN*/
	bool get_reserve(void);
	bool get_borrow(void);
	void set_bookname(string a);
	void set_bookname_ISBN(string a, string b);
	void set_ISBN(string a);
	void set_reserve(bool a);
	void set_borrow(bool a);
	void reserve_condition(void);
	void borrow_condition(void);
	void show_information(void);
	void transform_date(int a); /*transform tha data to the real data*/
};

#endif
