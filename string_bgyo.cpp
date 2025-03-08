#include <iostream>
using namespace std;
int strlen(char *A);
bool boolymaguire(char *A,char *B);

int length(char *A)
{
    int len=0;
    while(A[len]!=0) //while을 이용하면 편함.
    {
     len++;   
    }
    return len;
}

int main()
{
    char A[]="Hello There";
    char B[]="Hello There";
    if(boolymaguire(A,B)==true)
    {
        cout << A;
    }
    else 
    {
        cout << A << endl;
        cout << B << endl;
    }
}

bool boolymaguire(char *A,char *B)
{
    int a = length(A);
    int b = length(B);
    if(a!=b)
    {
        return false;
    }
    else 
    {
        for(int i=0;i<=a;i++)
        {
            if(A[i]!=B[i])
            {
                return false;
            }
        }
    }
    return true;
}