#include <iostream>

using namespace std;

int main()
{
    int x, y, dzialanie;
    char decyzja;

    start:

    cout << "\n Podaj x: ";
    cin >> x;

    cout << " Podaj y: ";
    cin >> y;

    cout << "\n";

    cout << " 1 - dodawanie" << endl;
    cout << " 2 - odejmowanie" << endl;
    cout << " 3 - mnozenie " << endl;
    cout << " 4 - dzielenie " << endl;

    cout << "\n Wybierz dzialanie: ";
    cin >> dzialanie;

    cout << "\n";

    switch (dzialanie)
    {
    case 1:
        cout << " " << x << " + " << y << " = " << x+y << endl;
        break;
    case 2:
        cout << " " <<  x << " - " << y << " = " << x-y << endl;
        break;
    case 3:
        cout << " " <<  x << " * " << y << " = " << x*y << endl;
        break;
    case 4:
        if(y==0)
            {
                cout << " Nie mozna dzielic przez zero" << endl;
                break;
            }
        cout <<  " " << x << " / " << y << " = " << double(x)/double(y) << endl;
        break;
    default:
        cout << " Nie ma takiego dzialania" << endl;
        break;
    }

    cout << "\n Jeszcze raz (t/n): ";
    cin >> decyzja;

    if (decyzja=='t')
        goto start;

    cout << "\n Koniec programu" << endl;

    return 0;
}
