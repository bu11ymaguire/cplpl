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
    b++; //b가 가리키는 메모리 주소가 a의 주소에서 sizeof(int)만큼 추가됨. 
    cout << "Phase2" <<endl;
    if (b==&a) //b가 가리키는 메모리 주소와 a의 메모리 주소는 더 이상 같지 않으므로 if문은 실행되지 않음음
    {
        cout << a << endl;
    }
    else //a와 b의 메모리 주소는 다르므로 else문이 실행됨.
    {
        cout << size_t(b) <<" "<< size_t(&a) << endl; 
        //b가 가리키는 메모리 주소와 a의 메모리 주소가 sizeof(int)만큼 차이남.
        cout << *b<<" "<< a << endl;
    }
    return 0;
}