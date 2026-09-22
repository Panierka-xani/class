#include <iostream>
using namespace std;

class liczby
{
    int a, b;

public:

    void wczytaj()
    {
        cout << "Podaj dwie liczby: ";
        cin >> a >> b;
    }

    void wpisz()
    {
        cout << "Suma: " << a + b << endl;
        cout << "Roznica: " << a - b << endl;
        cout << "Iloczyn: " << a * b << endl;

        if (b != 0)
            cout << "Iloraz: " << (double)a / b << endl;
        else
            cout << "Nie mozna dzielic przez zero." << endl;
    }
};

int main()
{
    liczby a;

    a.wczytaj();
    a.wpisz();

    return 0;
}
