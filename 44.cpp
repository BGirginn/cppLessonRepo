//! math functions

#include <math.h> // c ve c++
#include <stdio.h>
#include <iostream>
#include <cmath>  //c++
#include <cstdlib>  // for create random numbers


using namespace std;
int main(){

    cout << rand() % 6 << endl; // 1-6 arasında sayı üretme (6 hariç) %6, 6 ya bölip tam kısmını yazdırır ama her seferinde aynı sayılar gelir

    return 0;
}