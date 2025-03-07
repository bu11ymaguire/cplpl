#include <iostream>
using namespace std;

int main()
{
    char hello[] = "Hello There";
    char *H = hello;
    for(int i =0;i<=sizeof(hello);i++)
    {
        cout << hello[i];
    }
    cout <<endl;
    for (int i =0;i<=sizeof(hello);i++)
    {
        cout << *(H+i);
    }
    return 0;
}