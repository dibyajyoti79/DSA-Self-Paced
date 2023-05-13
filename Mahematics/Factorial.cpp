#include <iostream>
#include <limits.h>
using namespace std;

int fact(int num)
{
    int res = 1;
    for (int i = 2; i <= num; i++)
    {
        res = res * i;
    }

    return res;
}

int main()
{

    int number = 5;

    cout << fact(number);

    return 0;
}

// T.C => theta(n)
// S.C => theta(1)

//========================Recursive Solution===============================//
/*
int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }

    return n * fact(n-1);
}
*/

// T.C => theta(n)
// S.C => theta(n)