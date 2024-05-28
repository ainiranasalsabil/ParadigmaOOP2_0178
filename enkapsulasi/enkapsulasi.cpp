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

int main()
{
	remoteLampu lampuRumah;
	lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
	lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
	lampuRumah.setSaklarNo(2, "Lampu Kamar Tidur"); 
	lampuRumah.setSaklarNo(0, "Lampu Dapur");

	cout << lampuRumah.getsaklarNo(0) << endl;
	cout << lampuRumah.getsaklarNo(1) << endl;
	cout << lampuRumah.getsaklarNo(2) << endl;
	cout << lampuRumah.getsaklarNo(3) << endl;

	return 0;
}
