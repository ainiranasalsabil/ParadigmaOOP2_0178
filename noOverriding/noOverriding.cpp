#include <iostream>
using namespace std;

//class parent
//tambahkan final sesudah nama class
//untuk memvegah adanya overriding

class baseClass {
public:
	virtual void perkenalan() {
		cout << "Halo saya Function dari base class";
	}
};
