#include <stdio.h>
#include <iostream>
using namespace std;

//* içindeki bakiyeyi görüntüleyip para yatırıp çekebildiğimiz bir banka uygulaması.

// TODO Fatura ve benzeri işlemler eklenecek
void menu();
int bakiyeSorgula(int);
int main(int argc, char const *argv[])
{
    int secenekler;
    int paraMiktari = 5000;
    while (true)
    {
        menu();
        cin >> secenekler;
        switch (secenekler)
        {
        case 1:
            cout << "Bakiyeniz: " << bakiyeSorgula(paraMiktari) << endl;
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;

        default:
            break;
        }
    }

    return 0;
}

void menu()
{
    cout << "1. Bakiye Sorgula." << endl;
    cout << "2. Para Yatır." << endl;
    cout << "3. Para Cek." << endl;
    cout << "4. Cikis." << endl;
    cout << "Seçiminiz: " << endl;
}

int bakiyeSorgula(int paraMiktari)
{

    cout<< paraMiktari <<endl;;
}
