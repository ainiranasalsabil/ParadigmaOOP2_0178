#include <iostream>
using namespace std;

class baseclass 
{
public:
	virtual void perkenalan() 
	{
		cout << "Halo saya Functioan dari base class";
	}
};
class derivedClass : public baseclass 
{ 
public:
	void perkenalan() 
	{
		cout << "Halo saya Function dari derived Class";
	}
};

