#include <iostream>
using namespace std;

// A recursive function for computing the factorial of a number
int get_factorial(int n)
{
    if (n < 0)
        return 0;
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * get_factorial(n - 1);
    }
}

int main()
{
    cout << get_factorial(14.1) << endl;
    return 0;
}
