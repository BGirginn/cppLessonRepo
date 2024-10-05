#include <stdio.h>
#include <iostream>
using namespace std;

float Alan(int, float, float); //* kod bloğu ismi alan, input türleri int float float olarak paranteze yazıp direkt çalışır halde çağır
int secim;
float h, r;

int main()
{
    cout << "ÖNEMLİ UYARI: HESAPLAMALARDA Pİ DEĞERİ 3.14 OLARAK ALINMIŞTIR" << endl;
    cout << "1. Silindirin Hacmini Hesapla" << endl;
    cout << "2. Koninin Hacmini Hesapla" << endl;
    cout << "3. Kare Piramitin Hacmini Hesapla" << endl;
    cout << "Seçiminizi giriniz: ";
    cin >> secim;

    if (secim < 1 || secim > 3)
    {
        cout << "Geçersiz seçim! Lütfen 1, 2 veya 3 girin." << endl;
        return -1;
    }

    cout << "r (yarıçap) veya a (kenar) değerini giriniz: ";
    cin >> r;
    cout << "h (yükseklik) değerini giriniz: ";
    cin >> h;

    cout << "Hacim: " << Alan(secim, r, h) << endl;

    return 0;
}

float Alan(int secim, float r, float h)
{
    float hacim = 0.0f;
    switch (secim)
    {
    case 1:
        hacim = 3.14 * (r * r) * h;
        break;

    case 2:
        hacim = (1.0 / 3.0) * (3.14 * r * r * h);
        break;

    case 3:
        hacim = (1.0 / 3.0) * (r * r * h);
        break;

    default:
        cout << "Hatalı Seçim" << endl;
        break;
    }
    return hacim;
}
