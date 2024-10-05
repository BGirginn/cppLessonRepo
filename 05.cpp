/* #include <iostream>
#include <string>
using namespace std;

int main() {
    int sayi = 20;
    const int sabitSayi = 15;  // const eklenen değişkene alt satırlarda yeni bir veri eklenemez değişiklik yapılamaz int string fark etmez.;
    cout<<sayi<<endl;
    cout<<sabitSayi<<endl;

    char a[10]="Bora";
    cout << a << endl;
    char b[3] = "gr"; //! bu şekilde 3 karakter verilen bir değişkene daha fazlasını atayamazsın ve 2 adet tırnak da totalde 1 karakter olarak kabul edilir.
    cout << b << endl;
    return 0;
} */

// ! endl yazmayabilirsin ama o zaman alt satıra geçmez sonraki çıktı için ancak istersen \n kullanabilirsin. \t de sonraki ile arasında 4 space boşluk yapar. 
/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    float kisaKenar;
    float uzunKenar;
    
    cout << "uzun kenari giriniz: ";
    cin >> uzunKenar;

    cout << "kisa kenari giriniz: ";
    cin >> kisaKenar;

    cout<<"seklin alani: " << uzunKenar*kisaKenar << endl;
    cout<<"seklin cevresi: " << (uzunKenar+kisaKenar)*2 << endl;

    system("pause");
    return 0;
}
*/


#include <iostream>
#include <string>
using namespace std;


int main() {
/*
    int not1;
    int not2;
    int not3;
    float ortalama;

    cout <<"birinci sinav notunu giriniz: ";
    cin >> not1;

    cout <<"ikinci sinav notunu giriniz: ";
    cin >> not2;

    cout <<"ücüncü sinav notunu giriniz: ";
    cin >> not3;

    ortalama = (not1+not2+not3)/3;

    cout << "not ortalaması:" << ortalama << endl;
    
    system("pause");
*/
    int dene = 15;
    cout << sizeof(dene) << endl;  // ölçülen veri tipinin bit boyutunu söyler değişkenin karakter uzunluk miktarını değil

    return 0;

}
