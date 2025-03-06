#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter integer:";
    cin >> a;
    cout <<a <<" is " << (a % 2 ==0 ? "even" : "odd") << endl; /*삼항연산자 
    (조건식 ? 참의 결과값 : 거짓의 결과값)*/
    
    return 0;
}