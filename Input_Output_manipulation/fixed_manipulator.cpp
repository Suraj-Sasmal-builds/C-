#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num = 123.456789123;

    cout<<fixed<<setprecision(3)<<num<<endl;
    cout<<fixed<<setprecision(6)<<num<<endl;
    cout<<fixed<<setprecision(10)<<num<<endl;

    return 0;
}