#include <stdio.h>
#include <iostream>
using namespace std;
// void merhaba();
// int main()
// {
//     merhaba(); // fonksiyonun çağırılması için yazılan satır
//     return 0;
// }

// void merhaba()   // fonksiyonun main dışındaki tanım bloğu
// {
//     cout << "merhaba" << endl;
//     merhaba();   // bir fonksiyonun içine kendisini çağırırsan bellek aşımı durumuna kadar çalışır
// }

//! faktoriyel

// int fonksiyon(int); // bunun sebebi mainden önce başlıklarını tanımlayıp mainde çağırığ mainden sonra da fonksiyonu yazabilmek
// int main()
// {
//     int a;
//     cin >> a;
//     cout << fonksiyon(a) << endl;
//     return 0;
// }

// int fonksiyon(int sayi)
// {
//     if (sayi >= 1)
//     {
//         return sayi * fonksiyon(sayi - 1);
//     }
//     else
//         return 1;
// }

// ! 1 den n e kadar olanların toplamı

int toplam(int);
int main(){
    int a;
    cin >> a;
    cout<< toplam(a) <<endl;
    return 0;
}

int toplam (int sayi){
    if (sayi >=1 1)
    {
        return sayi + toplam(sayi - 1);
    }
    else {
        return 0;
    }
}