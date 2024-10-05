#include <iostream>
using namespace std;

int hesapla(int, int, int);

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    cout << hesapla(a,b,c) << endl;

    return 0;
}

int hesapla(int sayi1, int sayi2, int sayi3)
{
    int enKucuk;
    enKucuk = sayi1;
    if ( enKucuk<sayi2)
    {
        enKucuk=sayi2;
    }
    if (enKucuk<sayi3)
    {
        enKucuk=sayi3;
    }
    
    
    return enKucuk;
}
