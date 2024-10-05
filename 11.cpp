// variables changing

#include <iostream>
#include <string>
using namespace std;

int main() {

    int a = 15,
        b=100,
        c=55;
    float ort;
    ort=(float) (a + b + c) / 3;   // bir değişkenin türü tam anlamı ile bu saşak yöntem ile değiştiriliyor
    ort= (a+b+c)/(float) 3; // bu da başka bir kullanım şekli ama ilki daha iyi ve sağlıklı gibi geldi bilemedim
    cout<<ort<<endl;

    system("pause");
    return 0;
}

//* Local and global variables

#include <iostream>
#include <string>
using namespace std;


//! eğer bir değişkeni dış uzayda tanımladı isen dosya bazında global plur herhangi bir in main içinde tanımlarsan başka birinin içinde kullanamazsın
//! eğer bir değişkeni int main içinde tanımlarsan sonrasında aynı değişkene alt satırlarda dış uzayda tanımalayamazsın
