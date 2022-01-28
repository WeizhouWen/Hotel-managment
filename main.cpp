#include<iostream>
#include<string>
#include<time.h>
#include <fstream>
#include"book.h"
#include"user.h"
#include"staff.h"
#include"student.h"
#include"administrator.h"
#define i_book 20
#define i_student 20
#define i_staff 20

using namespace std;/*注意此程序不能中途退出，得正常流程退出*/

int create_account(int a, string b);/*used to create account*/
int log_account(string a);          /*used to log in*/
void save_book(book *a, int num);      /*all the six functions are used to read data from file and save data to the file*/
void read_book(book *a, int num);      /*different name for different use*/
void save_student(student *a, int num);
void read_student(student *a, int num);
void save_staff(staff *a, int num);
void read_staff(staff *a, int num);



int main(void)
{
	student stu[i_student];/*initlization of the three classes*/
	staff staff[i_staff];
	book b_oo_k[i_book];/*the maxinum number of book the ststem can store*/
	/*加入初始化文件之处*/
	
	read_book(b_oo_k , i_book);    /*read the data from the three files */
	read_student(stu, i_student);
	read_staff(staff, i_staff);

	
	book cotain_book[i_book];

	administrator P;

	int A0 = 0 , A1 = 0, A2 = 0, A3 = 0, A4 = 0, A5 = 0, A6 = 0;
	int B0 = 2, B1 = 2;

	int C1 = 0, C2 = 0;
	int D0 = 2, D1 = 2;

	int E1 = 0, E2 = 0;
	int F0 = 2, F1 = 2;
	int cho0 = 0, cho1 = 0, cho2 = 0, cho3 = 0, cho4 = 0, cho5 = 0, cho6 = 0;
	int CHO1 = 0, CHO2 = 0, CHO3 = 0, CHO4 = 0;




	cout << "This is a book management system" << endl;
	cout << " Welcome to use" << endl;
	system("pause");
	while (A0 == 0)
	{
		A1 = 0;
		C1 = 0;
		E1 = 0;
		system("cls");
		cout << "Please choose between the 4 choices:" << endl;
		cout << "1.Adminstrator" << endl;
		cout << "2.Student" << endl;
		cout << "3.Staff" << endl;
		cout << "4.exit the program" << endl;
		cin >> cho0;
		system("cls");
		switch (cho0)/*the largest switch loop*/
		{
		case 1: /*for the administrator*/
			while (A1 == 0)
			{
				A2 = 0;
				B0 = 2;
				B1 = 0;
				system("cls");
				cout << "Please choose bewteen the 2 choices:" << endl;
				cout << "1.Log in or create a new account" << endl;
				cout << "2.Back to the last interface" << endl;
				cin >> cho1;
				system("cls");
				switch (cho1)/*second switch for administrator*/
				{
				case 1:
					while (A2 == 0)
					{
						if (B1 == 0)
						{
							cout << "if you have an account, please enter 1, otherwise enter 0" << endl;
							cin >> B0;
							while (B0 == 0)
							{
								B0 = create_account(123, "adminstrator");
							}
							system("cls");
							while (B1 == 0)
							{
								B1 = log_account("adminstrator");
							}
						}
						system("cls");
						A3 = 0;
						A4 = 0;
						cout << "Please choose between the 3 choices" << endl;
						cout << "1.Manage book information" << endl;
						cout << "2.Manage user information" << endl;
						cout << "3. Back to the last interface" << endl;
						cin >> cho2;
						system("cls");
						switch (cho2)/*third switch for administrator*/
						{
						case 1:
							while (A3 == 0)
							{
								system("cls");
								cout << "Please choose between the 6 choices" << endl;
								cout << "1.Browse all books" << endl;
								cout << "2.Add a new book" << endl;
								cout << "3.Delete a book" << endl;
								cout << "4.Update a book" << endl;
								cout << "5.Search a book" << endl;
								cout << "6.Back to the last interface" << endl;
								cin >> cho3;
								system("cls");
								switch (cho3)/*fourht switch for administrator*/
								{
								case 1:
									system("cls");
									read_book(b_oo_k, i_book);
									P.browse_book(b_oo_k, i_book);/*browse all books*/
									system("pause");
									break;
								case 2:
									system("cls");
									read_book(b_oo_k, i_book);/*add a new book*/
									P.add_book(b_oo_k, i_book);
									save_book(b_oo_k, i_book);
									break;
								case 3:
									system("cls");
									read_book(b_oo_k, i_book);/*delete a book*/
									P.delete_book(b_oo_k, i_book);
									save_book(b_oo_k, i_book);
									break;
								case 4:
									system("cls");
									read_book(b_oo_k, i_book);
									P.update_book(b_oo_k, i_book);/*update a book*/
									save_book(b_oo_k, i_book);
									break;
								case 5:
									system("cls");
									read_book(b_oo_k, i_book);
									P.search_book(b_oo_k, i_book);/*search a book*/
									save_book(b_oo_k, i_book);
									break;
								case 6:
									A3 = 1;
									break;
								}

							}

							break;
						case 2:
							while (A4 == 0)
							{
								system("cls");
								A5 = 0;
								A6 = 0;
								cout << "Please choose between the 3 choices" << endl;
								cout << "1.Manage the student" << endl;
								cout << "2.Manage the staff" << endl;
								cout << "3.Back to the last interface" << endl;
								cin >> cho4;
								system("cls");
								switch (cho4)/*fourth switch for administrator*/
								{
								case 1:
									while (A5 == 0)
									{
										system("cls");
										cout << "Please choose between the 6 choices" << endl;
										cout << "1.Browse all students" << endl;
										cout << "2.Add a student" << endl;
										cout << "3.Delete a student" << endl;
										cout << "4.Update a student" << endl;
										cout << "5.Search a student" << endl;
										cout << "6.Back to the last interface" << endl;
										cin >> cho5;
										switch (cho5)/*fifth switch for administrator*/
										{
										case 1:
											system("cls");
											read_student(stu, i_student);/*browse all students*/
											P.browse_user(stu, i_student);
											save_student(stu, i_student);
											break;
										case 2:
											system("cls");
											read_student(stu, i_student);/*add a student*/
											P.add_user(stu, i_student);
											save_student(stu, i_student);
											break;
										case 3:
											system("cls");
											read_student(stu, i_student);
											P.delete_user(stu, i_student);
											save_student(stu, i_student);
											/*delete a student*/
											break;
										case 4:
											system("cls");
											read_student(stu, i_student);
											P.update_user(stu, i_student);
											save_student(stu, i_student);
											/*update a student*/
											break;
										case 5:
											system("cls");
											read_student(stu, i_student);
											P.search_user(stu, i_student);
											save_student(stu, i_student);
											/*search a student*/
											break;
										case 6:
											A5 = 1;
											break;
										}

									}

									break;
								case 2:
									while (A6 == 0)
									{
										system("cls");
										cout << "Please choose between the 6 choices" << endl;
										cout << "1.Browse all staffs" << endl;
										cout << "2.Add a staff" << endl;
										cout << "3.Delete a staff" << endl;
										cout << "4.Update a staff" << endl;
										cout << "5.Search a staff" << endl;
										cout << "6.Back to the last interface" << endl;
										cin >> cho6;
										switch (cho6)/*fifth switch for administrator*/
										{
										case 1:
											system("cls");
											read_staff(staff, i_student);
											P.browse_user(staff, i_student);
											save_staff(staff, i_student);
											/*browse all staffs*/
											break;
										case 2:
											system("cls");
											read_staff(staff, i_student);
											P.add_user(staff, i_student);
											save_staff(staff, i_student);
											/*add a staff*/
											break;
										case 3:
											system("cls");
											read_staff(staff, i_student);
											P.delete_user(staff, i_student);
											save_staff(staff, i_student);
											/*delete a staff*/
											break;
										case 4:
											system("cls");
											read_staff(staff, i_student);
											P.update_user(staff, i_student);
											save_staff(staff, i_student);
											/*update a staff*/
											break;
										case 5:
											system("cls");
											read_staff(staff, i_student);
											P.search_user(staff, i_student);
											save_staff(staff, i_student);
											/*search a staff*/
											break;
										case 6:
											A6 = 1;
											break;
										}
									}

									break;
								case 3:
									A4 = 1;
									break;
								}
								
							}
							break;
						case 3:
							A2 = 1;
							break;
						}
					}
					break;
				case 2:
					A1 = 2;
					break;
				}
			}

			break;
		case 2:/*for the student*/
			while (C1 == 0)
			{
				C2 = 0;
				D0 = 2;
				D1 = 0;
				system("cls");
				cout << "Please choose bewteen the 2 choices:" << endl;
				cout << "1.Log in or create a new account" << endl;
				cout << "2.Back to the last interface" << endl;
				cin >> CHO1;
				system("cls");
				switch (CHO1)/*second switch for student*/
				{
				case 1:
					while (C2 == 0)
					{
						if (D1 == 0)
						{
							D0 = 2;
							D1 = 0;
							cout << "if you have an account, please enter 1, otherwise enter 0" << endl;
							cin >> D0;
							while (D0 == 0)
							{
								D0 = create_account(321, "student_account");
							}
							system("cls");
							while (D1 == 0)
							{
								D1 = log_account("student_account");
							}
						}
						system("cls");
						cout << "Please choose between the 6 choices" << endl;
						cout << "1.Show books you borrowed and reserved" << endl;
						cout << "2.Reserve books" << endl;
						cout << "3.Borrow a book" << endl;
						cout << "4.Check expiration data for a book" << endl;
						cout << "5.Return books" << endl;
						cout << "6.Back to the last interface" << endl;
						cin >> CHO2;
						system("cls");
						switch (CHO2)/*third switch for student*/
						{
						case 1:
							system("cls");
							/*Show books you borrowed and reserved*/
							break;
						case 2:
							system("cls");
							/*Reserve books*/
							break;
						case 3:
							system("cls");
							/*Borrow a book*/
							break;
						case 4:
							system("cls");
							/*Check expiration data for a book*/
							break;
						case 5:
							system("cls");
							/*Return books*/
							break;
						case 6:
							C2 = 1;
							break;

						}
					}
					break;
				case 2:
					C1 = 2;
					break;
				}
			}

			break;
		case 3: /*for the staff*/
			while (E1 == 0)
			{
				E2 = 0;
				F0 = 2;
				F1 = 0;
				system("cls");
				cout << "Please choose bewteen the 2 choices:" << endl;
				cout << "1.Log in or create a new account" << endl;
				cout << "2.Back to the last interface" << endl;
				cin >> CHO3;
				system("cls");
				switch (CHO3)/*second switch for student*/
				{
				case 1:
					while (E2 == 0)
					{
						if (F1 == 0)
						{
							F0 = 2;
							F1 = 0;
							cout << "if you have an account, please enter 1, otherwise enter 0" << endl;
							cin >> F0;
							while (F0 == 0)
							{
								F0 = create_account(123321, "staff_account");
							}
							system("cls");
							while (F1 == 0)
							{
								F1 = log_account("staff_account");
							}
						}
						system("cls");
						cout << "Please choose between the 6 choices" << endl;
						cout << "1.Show books you borrowed and reserved" << endl;
						cout << "2.Reserve books" << endl;
						cout << "3.Borrow a book" << endl;
						cout << "4.Check expiration data for a book" << endl;
						cout << "5.Return books" << endl;
						cout << "6.Back to the last interface" << endl;
						cin >> CHO4;
						system("cls");
						switch (CHO4)/*third switch for student*/
						{
						case 1:
							system("cls");
							/*Show books you borrowed and reserved*/
							break;
						case 2:
							system("cls");
							/*Reserve books*/
							break;
						case 3:
							system("cls");
							/*Borrow a book*/
							break;
						case 4:
							system("cls");
							/*Check expiration data for a book*/
							break;
						case 5:
							system("cls");
							/*Return books*/
							break;
						case 6:
							E2 = 1;
							break;

						}
					}
					break;
				case 2:
					E1 = 2;
					break;
				}
			}

			break;
		case 4:
			A0 = 1;
			break;

		}
	}
	return 0;
}


int create_account(int a, string b)
{
	string name;
	string password;
	int code;

	cout << "Please enter your account name" << endl;
	cin >> name;
	cout << " Please enter your password" << endl;
	cin >> password;
	cout << "Please enter the code which has been given to you" << endl;
	cin >> code;
	if (code != a) /*to craete the account, the user has to know a code which will be given to them before creating the account*/
	{                        /*initial code  administration: 123  student: 321   staff:123321*/
		cout << "The check code is wrong, please try again" << endl;
		return 0;
	}
	else
	{
		cout << "You create your account successfully!" << endl;
		ofstream fout(b, ios::app);
		fout << name << endl;
		fout << password << endl;
		fout.close();
		return 1;
	}
}

int log_account(string a)
{
	string name;
	string password;
	string name1;
	string password1;
	int i = 0;
	int j = 0;

	cout << "Please enter the account name to log in:" << endl;
	cin >> name;
	cout << "Please enter the password to log in:" << endl;
	cin >> password;
	ifstream fin(a, ios::in);
	for (i = 0; i < 100; i++) /*maximun user(student or staff or administrator) is 100*/
	{
		fin >> name1;
		fin >> password1;          /*check the account input is right or not*/
		if (name1 == name && password == password1)
			j = 1;
	}
	fin.close();
	if (j == 1)
	{
		cout << "Log in successfully" << endl;
		return 1;
	}
	else
	{
		cout << "The information is not correct, please try again" << endl;
		return 0;
	}
}

void save_book(book *a, int num)
{
	int i;
	ofstream fout("book", ios::trunc|ios::binary);
	for(i = 0; i < num; i ++ )
	{
		fout.write((char*)&a[i], sizeof(book));
	}
	fout.close();
}

void read_book(book *a, int num)
{
	int i;
	ifstream fin("book",ios::in | ios::binary);
	for (i = 0; i < num; i++)
	{
		fin.read((char*)&a[i], sizeof(book));

	}
	fin.close();
}

void save_student(student *a, int num)
{
	int i;
	ofstream fout("student", ios::trunc | ios::binary);
	for (i = 0; i < num; i++)
	{
		fout.write((char*)&a[i], sizeof(book));
	}
	fout.close();
}

void read_student(student *a, int num)
{
	int i;
	ifstream fin("student", ios::in | ios::binary);
	for (i = 0; i < num; i++)
	{
		fin.read((char*)&a[i], sizeof(book));

	}
	fin.close();
}

void save_staff(staff *a, int num)
{
	int i;
	ofstream fout("staff", ios::trunc | ios::binary);
	for (i = 0; i < num; i++)
	{
		fout.write((char*)&a[i], sizeof(book));
	}
	fout.close();
}

void read_staff(staff *a, int num)
{
	int i;
	ifstream fin("staff", ios::in | ios::binary);
	for (i = 0; i < num; i++)
	{
		fin.read((char*)&a[i], sizeof(book));

	}
	fin.close();
}





/*初始化文件（初次运行使用）*/

/*b_oo_k[0].set_bookname_ISBN("A", "1-1");
	b_oo_k[1].set_bookname_ISBN("B", "1-2");
	b_oo_k[2].set_bookname_ISBN("C", "1-3");
	b_oo_k[3].set_bookname_ISBN("D", "1-4");
	b_oo_k[4].set_bookname_ISBN("E", "1-5");
	b_oo_k[5].set_bookname_ISBN("F", "1-6");
	b_oo_k[6].set_bookname_ISBN("G", "1-7");
	b_oo_k[7].set_bookname_ISBN("H", "1-8");
	b_oo_k[8].set_bookname_ISBN("I", "1-9");
	b_oo_k[9].set_bookname_ISBN("J", "1-10");
	save_book(b_oo_k, i_book);*/

/*stu[0].set_name_ID("A", 0);
	stu[1].set_name_ID("B", 1);
	stu[2].set_name_ID("C", 2);
	stu[3].set_name_ID("D", 3);
	stu[4].set_name_ID("E", 4);
	stu[5].set_name_ID("F", 5);
	stu[6].set_name_ID("G", 6);
	stu[7].set_name_ID("H", 7);
	stu[8].set_name_ID("I", 8);
	stu[9].set_name_ID("J", 9);
	save_student(stu, i_student);*/

/*staff[0].set_name_ID("A", 0);
	staff[1].set_name_ID("B", 1);
	staff[2].set_name_ID("C", 2);
	staff[3].set_name_ID("D", 3);
	staff[4].set_name_ID("E", 4);
	staff[5].set_name_ID("F", 5);
	staff[6].set_name_ID("G", 6);
	staff[7].set_name_ID("H", 7);
	staff[8].set_name_ID("I", 8);
	staff[9].set_name_ID("J", 9);
	save_staff(staff, i_staff);*/


