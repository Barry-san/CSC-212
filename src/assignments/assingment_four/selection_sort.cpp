// TODO : patch selection sort algorithm

#include <iostream>

int get_smallest_element(int arr[], int start, int end)
{
    int smallest = start;
    for (int i = start + 1; i < end; i++)
    {
        if (arr[smallest] > arr[i])
        {
            smallest = i;
        }
    }
    return smallest;
}

void selection_sort(int arr[], int size)
{
    int index_of_smallest;
    for (int i = 0; i < size; i++)
    {
        index_of_smallest = get_smallest_element(arr, i + 1, size);
        int temp = arr[i];
        arr[i] = arr[index_of_smallest];
        arr[index_of_smallest] = temp;
    }
}

int main()
{
    int test[] = {3, 1, 5, 4, 2};
    selection_sort(test, 5);
    for (int i = 0; i < 5; i++)
    {
        std::cout << test[i] << std::endl;
    }
    return 0;
}