#include <stdio.h>
#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    int saniye = 0;
    int dakika = 0;

    while (true)
    {
        Sleep(1000);
        system("cls");
        cout<< dakika << " : " << saniye << endl;
        saniye++ ;
        if (saniye == 60)
        {
            dakika++ ;
            saniye = 0;
        }
    }
    return 0;
}