#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<setfill('-')<<setw(35)<<""<<endl;

    cout<<setfill(' ');
    cout<<left<<setw(15)<<"Name"
        <<right<<setw(10)<<"Marks"
        <<endl;
    cout<<setfill('-')<<setw(35)<<""<<endl;
    
    cout<<setfill(' ');
    cout<<left<<setw(15)<<"Suraj"
        <<right<<setw(10)<<95<<endl;
    
    cout<<left<<setw(15)<<"Rahul"
        <<right<<setw(10)<<85<<endl;

    cout<<setfill('-')<<setw(35)<<""<<endl;
    
    return 0;
}