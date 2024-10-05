//* Control Things 
//* that part is telling to you how can control a code with jump,for,while,ilf,else if
//* File 15 and onwards belong to section 3

/*
#include <iostream>
#include <string>
using namespace std;

int note;

int main() {

    
    cout << "lütfen notunuzu giriniz: " << endl;

    cin < note;

    if (note >= 50)
    {
        cout << "öğrenci dersi geçti" << endl;
    }
    
    else if (note < 50)
    {
        cout << "öğrenci dersi geçemedi" << endl;
    }
    
    //!? 10<20 ? cout << doğrudur << endl: cout << yanlistir << endl; bu da bir if else benzeri mantık koşulu kullanım şeklidir

    return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;
/* 
int main() 
    {
        int a=15;
        int b=20;
        int c=30;

        if ( a>b && a>c)
        {
            cout << "a sayisi b ve c den büyüktür" << endl;
        }

        else if (b > a && b > c)
        {
            cout<<"b sayisi a ve c den büyüktür" <<endl;
        }
        
        else if (c > a && c > b)
        {
            cout << " c sayisi a ve b den büyüktür " << endl;
        }
        

        return 0;
    }
*/

int main() {

    int a,b,c, enBuyuk;
    cin >>a>>b>>c;

    enBuyuk=a;

    if (enBuyuk>b)
    {
        enBuyuk=b;
    }
    if (enBuyuk<c)
    {
        enBuyuk=c;
    }
    cout << "en buyuk sayi: "<< enBuyuk << endl;


    return 0;
}