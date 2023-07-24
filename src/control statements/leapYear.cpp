#include <iostream>
using namespace std;

int getNumberOfDaysInFeburary(int year)
{
    if (year % 100 == 0 && year % 400 == 0)
    {
        return 29;
    }
    else if (year % 4 == 0)
    {
        return 29;
    }
    return 28;
}

int main()
{

    int year;
    cout << "enter the year : ";
    cin >> year;
    cout << "the number of days in feburary in the year " << year << " is : " << getNumberOfDaysInFeburary(year) << endl;
    return 0;
}