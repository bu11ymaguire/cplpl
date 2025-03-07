#include <iostream>
using namespace std;

int main()
{
    cout << "try again\n"; //메모리 덜 사용 But 출력 시간이 걸림
    cout << "try again" << endl; //즉시 출력 But 출력 버퍼를 비우는 데 자원을 소모
}