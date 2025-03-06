#include <iostream>
using namespace std;

int main()
{
    char my_string[]="Hello\0, World!";
    for(int i=0;my_string[i]!='\0';i++)
    {
        cout << my_string[i];
    }
    return 0;
}