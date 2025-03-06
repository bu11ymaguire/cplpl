#include <iostream>
using namespace std;
int main()
{
    char args[75] = "Hello World!"; //문자열의 끝에는 항상 '\0'이 위치한다!
    for (int i=0; i<75;i++)
    {
        if (args[i]==0){
            cout << '0' << endl;
        }
        else {
            cout << args[i] << endl;
        }
    }
    cout << sizeof(args) << endl;
    return 0;
}