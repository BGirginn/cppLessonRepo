//* hesap makinesi

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int sayi1, sayi2;
    char islem;

    cout << "birinci sayiyi giriniz: " << endl;
    cin >> sayi1;
    cout << "ikinci sayiyi giriniz: " << endl;
    cin >> sayi2;
    cout << "islem seçiniz: " << endl;
    cin >> islem;

    switch (islem)
    {
    case '+':
        cout << "cevap: " << sayi1 + sayi2 << endl;
        break;

    case '-':
        cout << "cevap: " << sayi1 - sayi2 << endl;
        break;

    case '*':
        cout << "cevap: " << sayi1 * sayi2 << endl;
        break;

    case '/':
        cout << "cevap: " << sayi1 / sayi2 << endl;
        break;

    default:
        break;
    }
    system("pause");
    return 0;
}