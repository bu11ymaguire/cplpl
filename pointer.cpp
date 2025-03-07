#include <iostream>
using namespace std;

int main()
{
    int a =10;
    int *b = &a;
    cout << b << endl; //a의 메모리주소
    cout << a << endl; //10
    cout << *b << endl; //b가 가리키는 메모리 주소의 저장된 값 == 10
    cout << size_t(b) <<" " << size_t(b+1) <<endl;
    cout << size_t(b) << endl;
    b++;
    cout << b << endl;
    cout << a << endl; 
    cout << *b << endl; 
    cout << size_t(b) <<" " << size_t(b+1) <<endl;
    return 0;
}