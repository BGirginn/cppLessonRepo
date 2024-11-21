#include <iostream>
#include <string>
using namespace std;

// auto foo();  //! bu şekilde ön tanımlı fonksiyonlarda auto kullanacaksan ön tanım yapamazsın başa direkt fonksiyonu full yazacaksın
auto foo()
{
    return "15";
}

int main() {

    cout << foo() << endl;
    return 0;
}


