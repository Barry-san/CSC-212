// Example code showing how loops in c++ work

#include <iostream>

int main()
{

    for (size_t i = 0; i < 100; i++)
    {

        if (i == 55)
            continue;

        std::cout << i << std::endl;
    }

    return 0;
}
