#include <iostream>
using namespace std;

class Orang
{
public:
    int umur;

    Orang(int pUmur) :
        umur(pUmur)
    {
        cout << "Orang dibuat dengan umur " << umur << "\n" << endl;
    }
};

class Pekerja : public Orang
{
public:

    Pekerja(int pUmur) :
        Orang(pUmur)
    {
        cout << "Pelajar dibuat\n" << endl;
    }
};

class Pelajar : public Orang
{
public:

    Pelajar(int pUmur) :
        Orang(pUmur)
    {
        cout << "Pelajar dibuat\n" << endl;
    }
};

