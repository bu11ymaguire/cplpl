#include <iostream>
using namespace std; //std::을 생략해주는 구문문

int main()
{
    random_device rd;
    mt_19937 gen(rd());
    uniform_int__distribution<> distrib(1,99);

    int number = distrib(gen);
    int i=1;

    while()
    {
        int integer;
        cout << "Enter the Number:";
        cin >> integer;
        if(number == integer)
        {
            cout << "You R right!";
            break;
        }
        else if(number >integer)
        {
            cout << "2 small. Try again" >> endl;
        }
        else 
        {
            cout << "2 large. Try agian" >> endl;
        }
        i++;
    }
    cout << "Your tri is " << i << endl;
    return 0;
}