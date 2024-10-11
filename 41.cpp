#include <stdio.h>
#include <iostream>
using namespace std;
int mutlak(int);
float mutlat(float);
int main()
{

    system("pause");
    return 0;
}

int mutlak(int sayi)
{
    if (sayi >= 0)
    {
        return sayi;
    }
    else
        return -sayi;
}
float mutlak(float sayi)
{
    if (sayi >= 0.0)
    {
        return sayi;
    }
    else
        return -sayi;
}