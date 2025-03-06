#include <iostream>
using namespace std;
int main()
{
    char args[75] = "Hello World!";
    for (int i=0; i<75;i++)
    {
        if (args[i]==0){
            cout << '0' << endl;
        }
        else {
            cout << args[i] << endl;
        }
    }
    return 0;
}