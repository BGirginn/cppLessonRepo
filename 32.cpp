//* switch case

#include <iostream>
#include <string>
using namespace std;

int main()
{

    int a;
    cin >> a;

    switch (a) // a değişkenin kaça eşit olduğuna göre işleme alınacak case numarası seçilir
    {
    case 1:
        cout << "pazartesi" << endl;
        break;
    case 2:
        cout << "sali" << endl;
        break;
    case 3:
        cout << "carsamba" << endl;
        break;
    case 4:
        cout << "persembe" << endl;
        break;

    case 5:
        cout << "cuma" << endl;
        break;

    case 6:
        cout << "cumartesi" << endl;
        break;

    case 7:
        cout << "pazar" << endl;
        break;

    default:
    cout << "böyle bir gün yok" << endl;
        break;
    }
    return 0;
}