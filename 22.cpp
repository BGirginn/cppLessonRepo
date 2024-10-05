//*do while

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int ogrenciNotSayisi, ogrenciNot, temp;
    float toplam = 0;

    cout << "Öğrenci not sayısını giriniz: ";
    cin >> ogrenciNotSayisi;
    temp = ogrenciNotSayisi;

    do
    {
        cout << temp << ". notu giriniz: ";
        cin >> ogrenciNot;
        toplam += ogrenciNot;
        temp--;
    } while (temp != 0);

    cout << "Öğrenci not ortalaması: " << toplam / ogrenciNotSayisi << endl;

    system("pause"); // Windows platformunda bu satır sorun çıkarmayacaktır.

    return 0;
}

//! bir de break komutu var ayrı bir videoda anlatılmış da işleme alındığı an kodu durduruyor özeti bu yani
//! örneğin bir koşul gerçekleşince olsun istiyorsan işte if in içine break atıyorsun o olay olunca kod duruyor

//! aynı şekilde continue de genelde if while tipi yerlerin içinde kullanulılır
//! mesela bir if içinde continue kullanıldığında işleme alındığında kendinden sonra parantez bitene kadar olan kısmı atlar