#include <iostream>
#include <cmath>
using namespace std;

void get_12_hour_notation_from_24(int time)
{
    int minutes;
    int hours;

    minutes = time % 100;
    hours = floor(time / 100);

    int converted_hours = hours % 12;

    if (time == 2400 || time == 0000)
    {
        cout << "Midnight" << endl;
    }
    else if (time == 1200)
    {
        cout << "Noon" << endl;
    }
    else
    {
        char after[] = "pm";
        char before[] = "am";
        cout << converted_hours << ":" << minutes;
        if (time > 1200)
            cout << after << endl;
        else
            cout << before << endl;
    }
}
int main()
{
    get_12_hour_notation_from_24(2134);
    return 0;
}