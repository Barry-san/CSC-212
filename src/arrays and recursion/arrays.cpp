#include <iostream>
using namespace std;

int sum_of_contents(int scores[], int size);

int main()
{

    int scores[] = {1,
                    2,
                    3,
                    4,
                    5,
                    6,
                    7,
                    8,
                    9,
                    10};
    int sum;

    sum = sum_of_contents(scores, 10);

    cout << sum << endl;
    return 0;
}

// passing an array as a  function parameter

int sum_of_contents(int scores[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += scores[i];
    }
    return sum;
}