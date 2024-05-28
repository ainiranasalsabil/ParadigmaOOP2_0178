#include <iostream>
using namespace std;

class remoteLampu 
{
	string saklarNo[10];

public:
	void setSaklarNo(int i, string value)
	{
		saklarNo[1] = value;
	}
	string getsaklarNo(int i)
	{
		return saklarNo[i];
	}
};

