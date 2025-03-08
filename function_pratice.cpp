#include <iostream>
using namespace std;

int sum(int x, int y);

int main()
{
    int a = 10;
    int b = 20;
    cout << a <<"+" << b <<"="<<sum(a,b);
}

int sum(int x, int y)
{
    int S = x + y;
    return S;
}