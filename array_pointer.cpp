#include <iostream>
using namespace std;

int main()
{
    char hello[] = "Hello There";
    char *H = hello;
    for(int i =0;i<=sizeof(hello);i++)
    {
        cout << hello[i]; //문자열의 [0]부터 [sizeof(array)]까지의 원소를 차례대로 출력.
    }
    cout <<endl;
    for (int i =0;i<=sizeof(hello);i++)
    {
        cout << *(H+i); //*(H+i)는 hello[i]의 주소가 가리키는 내용을 가져온다.
    }
    return 0; 
}