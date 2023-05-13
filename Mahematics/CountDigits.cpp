#include <iostream>
#include <limits.h>
using namespace std;

int countDigits(int num)
{
    int res = 0;
    while (num > 0)
    {
        num = num / 10;
        res++;
    }
    return res;
}

int main()
{

    int number = 789;

    cout << countDigits(number);

    return 0;
}

// T.C => theta(d), d is the number of digits