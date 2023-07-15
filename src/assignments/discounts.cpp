#include <iostream>
using std::cout, std::endl, std::cin;

double computeDiscount(double amount)
{
    double discountPercentage;

    if (amount >= 200000 && amount < 1000000)
    {
        discountPercentage = 0.03;
    }
    else if (amount >= 1000000)
    {
        discountPercentage = 0.07;
    }
    else
    {
        discountPercentage = 0.0;
    }

    return amount * discountPercentage;
}

double amountToBePayed(double amount)
{
    double discount = computeDiscount(amount);
    return amount - discount;
}

int main()
{
    int input;
    char flag = 'y';
    while (flag == 'y' || flag == 'Y')
    {
        cout << "enter the total amount of goods purchased : ";
        cin >> input;

        cout << "amount of goods purchased : " << input << endl;
        cout << "discount : " << computeDiscount(input) << endl;
        cout << "final amount : " << amountToBePayed(input) << endl;
        cout << "do you want to proceed? (y/n) ";
        cin >> flag;
    }

    return 0;
}
