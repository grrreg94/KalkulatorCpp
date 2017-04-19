#include <iostream>

using namespace std;

int main()
{
    int wynik, liczba, wybor;

    do
    {
        cin.clear();
        cin.sync();
        cout << "Podaj liczbe na poczatek, rozna od zera.\n";
        cin >> wynik;
    }while (cin.good() == 0 || wynik == 0);

    do
    {
        cin.clear();
        cin.sync();
        cout << "Podaj droga liczbe\n";
        cin >> liczba;
    }while (cin.good() == 0 || liczba == 0);


    do
    {

        cout << "Podaj zadane dzialanie: [1] Dodawanie [2] Odejmowanie [3] Mnozenie [4] Dzielenie [5] Rezygnuj\n";
        cin >> wybor;

        switch (wybor)
        {
            case 1:
                wynik += liczba;
                cout << "Wynik to: " << wynik << endl << endl;
                break;
            case 2:
                wynik -= liczba;
                cout << "Wynik to: " << wynik << endl << endl;
                break;
            case 3:
                wynik *= liczba;
                cout << "Wynik to: " << wynik << endl << endl;
                break;
            case 4:
                wynik /= liczba;
                cout << "Wynik to: " << wynik << endl << endl;
            case 5:
                break;
            default:
                cout << "Podales zadne z liczb\n";
                break;
        }
        if (wybor != 5)
        do
        {
            cin.clear();
            cin.sync();
            cout << "Podaj liczbe\n";
            cin >> liczba;
        }while (cin.good() == 0 || liczba == 0);



    }while (wybor != 5);

    cout << "Koniec.\n";

    return 0;
}
