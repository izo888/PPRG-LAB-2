#include <iostream>
using namespace std;

int main() {
    int miesiac;
    cout << "Podaj numer miesiaca (1-12): ";
    cin >> miesiac;

    if (miesiac < 1 || miesiac > 12) {
        cout << "Podana liczba jest spoza przedzialu 1-12. Program zakonczyl dzialanie." << endl;
        return 1;
    }

    string nazwaMiesiaca;
    int liczbaDni;
    string pogoda;

    switch (miesiac) {
        case 1:
            nazwaMiesiaca = "Styczen";
            liczbaDni = 31;
            pogoda = "Pochmurno";
            break;
        case 2:
            nazwaMiesiaca = "Luty";
            liczbaDni = 28;
            pogoda = "Pochmurno";
            break;
        case 3:
            nazwaMiesiaca = "Marzec";
            liczbaDni = 31;
            pogoda = "Pochmurno";
            break;
        case 4:
            nazwaMiesiaca = "Kwiecien";
            liczbaDni = 30;
            pogoda = "Slonecznie";
            break;
        case 5:
            nazwaMiesiaca = "Maj";
            liczbaDni = 31;
            pogoda = "Slonecznie";
            break;
        case 6:
            nazwaMiesiaca = "Czerwiec";
            liczbaDni = 30;
            pogoda = "Slonecznie";
            break;
        case 7:
            nazwaMiesiaca = "Lipiec";
            liczbaDni = 31;
            pogoda = "Slonecznie";
            break;
        case 8:
            nazwaMiesiaca = "Sierpien";
            liczbaDni = 31;
            pogoda = "Slonecznie";
            break;
        case 9:
            nazwaMiesiaca = "Wrzesien";
            liczbaDni = 30;
            pogoda = "Slonecznie";
            break;
        case 10:
            nazwaMiesiaca = "Pazdziernik";
            liczbaDni = 31;
            pogoda = "Pochmurno";
            break;
        case 11:
            nazwaMiesiaca = "Listopad";
            liczbaDni = 30;
            pogoda = "Pochmurno";
            break;
        case 12:
            nazwaMiesiaca = "Grudzien";
            liczbaDni = 31;
            pogoda = "Pochmurno";
            break;
        default:
            cout << "Blad: nieprawidlowy numer miesiaca." << endl;
            return 1;
    }

    cout << "Miesiac: " << nazwaMiesiaca << endl;
    cout << "Liczba dni: " << liczbaDni << endl;
    cout << "Pogoda: " << pogoda << endl;

    return 0;
}
