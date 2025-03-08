#include <iostream>
using namespace std;

int sum(int x, int y); //함수 선언을 먼저 해놓고고
void island(int a, int b, int* S);


int main()
{
    int a = 10;
    int b = 20;
    cout << a <<"+" << b <<"="<<sum(a,b)<<endl;
    /*
    int *S
    island(a,b, S);는 잘못된 함수의 선언언
    */
    int S; //먼저 정수형 변수를 하나 선언하고
    island(a,b,&S); //그 변수의 주소를 void 함수에 가져오는 것이 안정적적
    cout << S<<" "<< &S;
    return 0;
}

int sum(int x, int y) //내용을 정의할 수 있다.
{
    int S = x + y;
    return S;
}

void island(int a, int b, int* S)
{
    *S = a + b;
}