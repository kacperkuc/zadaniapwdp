#include <iostream>
using namespace std;
int main() {
    int dodawanie1;
    int dodawanie2;
    int mnozenie1;
    int mnozenie2;
    int rodzajDzialania;
    int wynikDodawania;
    int wynikMnozenia;
    char decyzjaT = 't';
    char decyzjaN = 'n';
    
        
     while (decyzjaT == 't') {
        cout << "Podaj rodzaj działania" << endl;
        cout << "1 - dodawanie" << endl;
        cout << "2 - mnozenie" << endl;
        cin >> rodzajDzialania;


        if (rodzajDzialania == 1) {
            cout << "Podaj pierwszy składnik sumy" << endl;
            cin >> dodawanie1;
            cout << "Podaj drugi składnik sumy" << endl;
            cin >> dodawanie2;
            wynikDodawania = dodawanie1 + dodawanie2;
            cout << dodawanie1 << "+" << dodawanie2 << "=" << wynikDodawania << endl;
            cout << "Chcesz spróbować jeszcze raz?" << endl;
            cin >> decyzjaT;
            system("pause");

        } else {
            if (rodzajDzialania == 2) {
                cout << "Podaj pierwszą liczbę" << endl;
                cin >> mnozenie1;
                cout << "Podaj drugą liczbę" << endl;
                cin >> mnozenie2;
                wynikMnozenia = mnozenie1 * mnozenie2;
                cout << mnozenie1 << "*" << mnozenie2 << "=" << wynikMnozenia << endl;
                cout << "Chcesz spróbować jeszcze raz?" << endl;
                cin >> decyzjaT;
                system("pause");
            }  else {
                    if (decyzjaN == 'n') {
                        return 0;
                        } else {
                        return 0;
                        }

        }
        }
     }
}
