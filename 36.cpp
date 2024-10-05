#include <iostream>
#include <string>
using namespace std;

void secenekler();
float dikdortgen();
float kare();
float ucgen();
float alanD, alanK, alanU;

int main(int argc, char const *argv[])
{
    int op;
    while (true)
    {
        secenekler();
        cin >> op;
        switch (op)
        {
        case 1:
            alanD = dikdortgen();
            cout << "Alan: " << alanD << endl;
            break;
        case 2:
            alanK = kare();
            cout << "Alan: " << alanK << endl;
            break;
        case 3:
            alanU = ucgen();
            cout << "Alan: " << alanU << endl;
            break;

        default:
            cout << "lütfen sadece seçeneklerden birini giriniz." << endl;
            break;
        }
    }

    return 0;
}

void secenekler()
{
    cout << "1. Dikdörtgenin Alanı" << endl;
    cout << "2. Karenin Alanı" << endl;
    cout << "3. Üçgenin Alanı" << endl;
    cout << "Seçiminiz: " << endl;
}

float dikdortgen()
{
    int a, b;
    cout << "Kısa kenarın uzunluğunu giriniz: " << endl;
    cin >> a;
    cout << "Uzun kenarın uzunluğunu giriniz: " << endl;
    cin >> b;
    return (a * b);
}

float kare()
{
    int a, b;
    cout << "Kısa kenarın uzunluğunu giriniz: " << endl;
    cin >> a;
    cout << "Uzun kenarın uzunluğunu giriniz: " << endl;
    cin >> b;
    return (a * b);
}

float ucgen()
{
    int a, h;
    cout << "Taban uzunluğunu giriniz: " << a << endl;
    cin >> a;
    cout << "Yüksekliği giriniz: " << endl;
    cin >> h;
    return ((a * h) / 2);
}