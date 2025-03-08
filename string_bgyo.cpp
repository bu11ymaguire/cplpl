#include <iostream>
using namespace std;
bool boolymaguire(char A[],char B[]);

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

bool boolymaguire(char A[],char B[])
{
    if (sizeof(A)!=sizeof(B))
    {
        return false;
    }
    else 
    {
        for (int i=0;i<=sizeof(A);i++)
        {
            if((i==sizeof(A))&&(A[i]==B[i]))
            {
                return true;
            }
            else
            {
                if(A[i]!=B[i])
                {
                    return false;
                }
                else 
                {
                    continue;
                }
            }
        }
    }
}