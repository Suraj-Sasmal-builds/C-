#include <iostream>
using namespace std;

int main()
{

    bool isStudent = true;
    bool ispassed = false;

    // boolalpha 
    
    cout << boolalpha;

    cout<<isStudent<<endl;
    cout<<ispassed<<endl;

    // noboolalpha

    cout<<noboolalpha;
    cout<<isStudent<<endl;
    cout<<ispassed<<endl;

    return 0;

}