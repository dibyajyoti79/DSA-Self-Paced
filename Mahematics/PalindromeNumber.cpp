#include <iostream>
#include <limits.h>
using namespace std;

bool isPal(int num)
{
    int temp = num, rev = 0;
    while (temp != 0)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp /= 10;
    }

    return (rev == num);
}

int main()
{

    int number = 4554;
    cout << (bool)isPal(number);
    // for true/false printing
    // cout << boolalpha << isPal(number);

    return 0;
}

// T.C => theta(d), d is the number of digits