#include <iostream>
using namespace std;

int main()
{
    int a =10;
    int *b = &a;
    cout << b << endl; //a의 메모리주소
    cout << &a << endl;
    cout << a << endl; //10
    cout << *b << endl; //b가 가리키는 메모리 주소의 저장된 값 == 10
    cout << size_t(b) << endl; //16진수 메모리 주소를 10진수로 알아보기 쉽게
    b++;
    cout << "Phase2" <<endl;
    if (b==&a)
    {
        cout << a << endl;
    }
    else
    {
        cout << size_t(b) <<" "<< size_t(&a) << endl;
        cout << *b<<" "<< a << endl;
    }
    return 0;
}