#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num = 25.5;

    cout<<setprecision(6)<<showpoint<<num<<endl;
    cout<<setprecision(6)<<noshowpoint<<num<<endl;

    return 0;

}