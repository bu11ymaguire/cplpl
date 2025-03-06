#include <iostream>
using namespace std;

int main()
{
    char user_input[100];
    cout << "Enter the sentence." << endl;
    cout << "Try.:";
    cin >> user_input; //자로형에 따라서 알아서 맞춤으로 해줌
    cout << "out:" << user_input << endl;
    return 0;
}