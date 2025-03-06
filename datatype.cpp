#include <iostream>
using namespace std;

int main(){
    int i = 123;
    cout << i << " " << sizeof(i) <<endl; //int에 할당되는 메모리 4byte

    bool is_good = true;
    bool isnt_good = false;

    cout << is_good << endl;
    cout << isnt_good <<endl;
    cout << boolalpha; //출력 true <> 0 , false <> 1 변
    cout << is_good << endl;
    cout << isnt_good << endl;
    cout << boolalpha;
    cout << (is_good&&isnt_good) << endl;
    cout << (is_good||isnt_good) << endl;
    { //scope
        cout << i <<endl; //123
        int i = 700;   
        cout << i << endl; //700
    }
    cout << i << endl; //123
    {
        i = 900;
        cout << i << endl; //900
    }
    cout << i << endl; //900

    
    return 0;
}