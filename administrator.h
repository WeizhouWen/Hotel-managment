#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include"book.h"
#include"student.h"
#include"staff.h"
#include <string>

using namespace std;

class administrator
{
public:
	void browse_book(book *a, int num);
	void add_book(book *a, int num); 
	void delete_book(book *a, int num); /*find the book according to the isbn*/
	void update_book(book *a, int num);/*find the book according to the isbn*/
	void search_book(book *a, int num);/*find the book according to the bookname*/
	void browse_user(student *a, int num);
	void browse_user(staff *a, int num);
	void search_user(student *a, int num);
	void search_user(staff *a, int num);
	void add_user(student *a, int num);
	void add_user(staff *a, int num);
	void delete_user(student *a, int num);
	void delete_user(staff *a, int num);
	void update_user(student *a, int num);
	void update_user(staff *a, int num);



};

#endif