#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num = 100;

    cout<<setfill('*')<<setw(10)<<num<<endl;
    cout<<setfill('#')<<setw(10)<<num<<endl;
    cout<<setfill('-')<<setw(10)<<num<<endl;

    return 0;
}