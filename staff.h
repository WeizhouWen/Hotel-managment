#include "user.h"
#include <string>

using namespace std;

#ifndef _STAFF
#define _STAFF
class staff :public user
{
public:
	staff()
	{
		{
			ID = 0;
			name = "Not Given";
			fine = 0;
			numOfbook = 0; 
		}
	}// initialize a class of staff 
};
#endif
