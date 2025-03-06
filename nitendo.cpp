#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter integer:";
    cin >> a;
    switch(a%2)
    {
        case 0:
        cout << "Even number."<<endl;
        break;
        case 1:
        cout << "Odd number."<<endl;
        break;
    }
    
    return 0;
}