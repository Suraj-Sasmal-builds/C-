#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double num = 123456.78934345;

    cout<<scientific<<setprecision(3)<<num<<endl;
    cout<<scientific<<setprecision(6)<<num<<endl;
    cout<<scientific<<setprecision(9)<<num<<endl;

    return 0;
}