// ! Döngüler

// * For
#include <iostream>
#include <string>


/*
using namespace std;

int main() {

    for (int i = 0; i <= 10; ++i)       // eğer for içine diret sadece ;; yazarsan içini sonsuz kere çalıştırır boktan bişi işte ya
    {
        cout << i << endl;
    }
    

    return 0;
}
*/

/*
//! int argc ve argv nin mantık örneği
int main(int argc, char const *argv[]) {
    printf("Kaç tane yemek söylendi: %d\n", argc); // Kaç yemek söylendiğini yazdırır.
    printf("İlk yemek: %s\n", argv[1]); // İlk yemeğin ne olduğunu yazdırır.
    printf("İkinci yemek: %s\n", argv[2]); // İkinci yemeğin ne olduğunu yazdırır.
    return 0;
}

Kaç tane yemek söylendi: 3
İlk yemek: Pizza
İkinci yemek: Burger

*/


using namespace std;

int main(int argc, char const *argv[]) 
{

    int a, b, ebob,ekok;
    cin >> a >> b;
    for (int i = 1 ; i <=a && i<=b; i++)
    {
        if (a%i == 0 && b %i == 0)
        {
            ebob = i;
        }
        
    }
    

    ekok = (a*b)/ebob;

    cout << "ebob: "<< ebob << endl;
    cout << "ekok: " << ekok << endl;

    return 0;
}