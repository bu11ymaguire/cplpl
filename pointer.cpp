#include <iostream>
using namespace std;

int main()
{
    int a =10;
    int *b = &a;
    cout << b << endl; 
    cout << a << endl;
    cout << *b << endl;
    cout << b <<" " << b+1 <<endl;
    cout << b << endl;
    b++;
    cout << b << endl;
    cout << a << endl;
    cout << *b << endl;
    cout << b <<" " << b+1 <<endl;
}