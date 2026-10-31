#include <iostream>
using namespace std;

int main()
{
    int age;
    string name;

    cout<<"Enter age: ";
    cin >> age;

    cout<<"Enter name: ";
    getline(cin, name);

    cout<<"Age: "<<age<<endl;
    cout<<"Name: "<<name<<endl;

    return 0;

}