//! POINTER

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{

    // int sayi;
    // int *sayiPointer = &sayi; // pointer değişken adi icin * bağlanacağı adres degeri icin & kullanılır

    int sayi = 10;
    int *sayiPointer;
    sayiPointer = &sayi;  // ikisi de pointer ama burada tanımlarken başına * koymuyorsun

    cout << *sayiPointer << endl;
    cout << sayi << endl;

    cout << sayiPointer << endl;
    cout << &sayi << endl;

    return 0;
}
