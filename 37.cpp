#include <iostream>
#include <stdio.h>
using namespace std;

int hesapla(int, int, int);

int main()
{

    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << hesapla(a, b, c) << endl;

    return 0;
}

int hesapla(int sayi1, int sayi2, int sayi3)
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

    return enKucuk;
}
//! int hesapla içine int sayi1 sayi2 sayi3 yazma sebebimiz int sonuc= hesapla (2,5,9) yazarsan direkt sayi 1 2 3 yerine o sayılar ile çağırır

/* int hesapla(int sayi1, int sayi2, int sayi3)
{
    return (sayi1 < sayi2 && sayi1 < sayi3) ? sayi1 : (sayi2 < sayi3 ? sayi2 : sayi3);
}
*/
//? farklı bir kullanım yöntemi
