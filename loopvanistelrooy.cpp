#include <iostream>
using namespace std;

int main()
{
    char args[]="Hello \0 World!";
    int i=0;
    while(true)
    {
        cout << args[i];
        i++;
        if(i==sizeof(args)){
            break;
        }
    }
    return 0;
}