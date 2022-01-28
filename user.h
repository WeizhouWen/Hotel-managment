#ifndef _USER
#define _USER
#include<string>

using namespace std;

class user
{

protected:
	long ID;// the ID number of the user
	string name;// the name of the user
	int fine;// if his/her books are expired, the fine he/she need to pay
	int numOfbook;// the number of book he/she borrow
public:
	long get_ID();
	string get_name();
	int get_fine();// show the penalty
	int get_numOfbook();
	void set_ID(long inputID);// set the ID of the user
	void set_name(string a);//set the name of the user
	void set_fine(int a);// calculate the penalty  
	void show_information();// show the detailed information of one user
	void set_numOfbook(int num);// set the number of book when the user borrow/return book
	void set_name_ID(string a, long b);


};
#endif
