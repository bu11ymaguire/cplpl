#include <iostream>
using namespace std;
bool boolymaguire(char *A,char *B);

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
    int c;
    if (sizeof(A)!=sizeof(B))
    {
        c=1;
    }
    else 
    {
        for (int i=0;i<=sizeof(A);i++)
        {
            if((i==sizeof(A))&&(A[i]==B[i]))
            {
                c=0;
            }
            else
            {
                if(A[i]!=B[i])
                {
                    c=1;
                }
                else 
                {
                    continue;
                }
            }
        }
    }
    if (c==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}