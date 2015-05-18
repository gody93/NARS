#include <iostream>

using namespace std;

int main()
{
    int i,j;
    for(i=6; i>=1; i=i-2)
    {
        for(j=i; j>=1; j=j-2)
            cout<< "  ";
        for(j=5; j>=i; j--)
            cout<< "* ";
        for(j=i; j>1; j--)
            cout<< "  ";
        for(j=5; j>=i; j--)
            cout<< "* ";
        cout<< "\n ";
    }
    for(i=1; i<=6; i++)
    {
        for(j=1; j<=i; j++)
            cout<< "  ";
        for(j=6; j>i; j--)
            cout<< "* ";
        for(j=4; j>=i; j--)
            cout<< "* ";
        cout<< "\n ";
    }
}
