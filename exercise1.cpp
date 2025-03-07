#include <iosteam>
using namespace std;

int main()
{
    random_device rd;
    mt_19937 gen(rd());
    uniform_int__distribution<> distrib(1,99);

    int number = distrib(gen);

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

    }

}