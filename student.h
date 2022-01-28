#include "user.h"
#include <string>

using namespace std;

#ifndef _STUDENT
#define _STUDENT
class student :public user
{
public:
	student()
	{

		ID = 0;
		name = "Not Given";
		fine = 0;
		numOfbook = 0; // for now, no book is borrowed
	}
		             // initialize a class of student
};
#endif
