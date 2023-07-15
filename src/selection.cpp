// example on how selection statements (switch in this case) work in c++

#include <iostream>
using namespace std;

int main()
{
    char grade = 'A';
    switch (grade)
    {
    case 'A':
        cout << "your grade point is 5" << endl;
        break;
    case 'B':
        cout << "your grade point is 4" << endl;
        break;

    case 'C':
        cout << "your grade point is 3" << endl;
        break;
    case 'D':
        cout << "your grade point is 2" << endl;
        break;
    case 'E':
        cout << "your grade point is 1" << endl;
        break;
    case 'F':
        cout << "your grade point is 0" << endl;
        break;

    default:
        cout << "please enter a valid grade" << endl;
        break;
    }
}