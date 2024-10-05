//* functions

#include <iostream>
#include <string>
using namespace std;

//! fonksiyonlar eğer başka bir dosyadan çağırılmıyorsa int main in üstünde tanımlanmak zorundadır veya alttaki kullanım şekli de doğrudur.

void fonk1();

int main()
{
    //! bir fonksiyonu çağırırken isminden sonra parantez yazmak zorundasın boş ya da dolu fark etmez.
    fonk1();
    return 0;
}

void fonk1()
{
    int a, b, toplam;
    cin >> a >> b;
    toplam = a + b;
    cout << toplam << endl;
}

//* "setprecision()" ondalıklı sayılarda virgülden sonra kaç basamak gösterileceğini ayarlar.

//! VOID FONKSIYONLAR DEGER DONDURMEZ VE SONUNDA RETURN KULLANILMAZ.
//! INT FLOAT DOUBLE CHAR TIPI FONKSIYONLAR DEGER DONDURUR VE RETURN KULLANILIR.
