#include <stdio.h>
#include <iostream>
using namespace std;

//* fonksiyona referans ile parametre çağırmak
int hesapla(int, int, int, int&, int&);
int main()
{
    int a, b, c, enBuyuk, ortanca;
    cin >> a, b, c;
    cout << "en küçük sayı: "<<hesapla(a, b, c, enBuyuk, ortanca) << endl;
    cout << "en büyük sayi: " << enBuyuk << endl;
    return 0;
}

int hesapla(int sayi1, int sayi2, int sayi3, int& ortanca, int& enBuyuk)
{
    int enKucuk;

    enKucuk = sayi1;
    if (enKucuk > sayi2)
    {
        enKucuk = sayi2;
    }
    if (enKucuk > sayi3)
    {
        enKucuk = sayi3;
    }

    if (enBuyuk < sayi2)
    {
        enBuyuk = sayi2;
    }
    if (enBuyuk < sayi3)
    {
        enBuyuk = sayi3;
    }


    return enKucuk; //* program return ile karşılaştığı anda durur.
}