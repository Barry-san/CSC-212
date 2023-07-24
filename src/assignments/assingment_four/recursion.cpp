#include <iostream>
using namespace std;

void reverseArr(int arr[], int size);

int main()
{
    int size;
    cout << "enter the amount of numbers you wish to input : ";
    cin >> size;

    int arr[size];

    cout << "enter " << size << " numbers : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverseArr(arr, size);
    return 0;
}

void reverseArr(int input_arr[], int arr_size)
{
    if (arr_size == 0)
        return;
    cout << input_arr[arr_size - 1] << " ";
    reverseArr(input_arr, (arr_size - 1));
}