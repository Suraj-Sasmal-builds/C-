#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num = 123.456789123;

    cout<<setprecision(3)<<num<<endl;
    cout<<setprecision(5)<<num<<endl;
    cout<<setprecision(8)<<num<<endl;

    return 0;
}