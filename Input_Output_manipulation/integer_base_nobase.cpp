#include <iostream>
using namespace std;

int main()
{
    int num = 255;

    cout<<showbase;

    cout<<"Hexadecimal: "<<hex<<num<<endl;
    cout<<"Octal: "<<oct<<num<<endl;

    cout<<noshowbase;

    cout<<"Hexidecimal: "<<hex<<num<<endl;
    cout<<"Octal: "<<oct<<num<<endl;

    return 0;
}