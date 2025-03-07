#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 99);

    int number = distrib(gen);
    int i = 1;

    while(true)
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
            cout << "2 small. Try again" << endl;
        }
        else 
        {
            cout << "2 large. Try agian" << endl;
        }
        i++;
    }
    cout << "Your tri is " << i << endl;
    return 0;
}