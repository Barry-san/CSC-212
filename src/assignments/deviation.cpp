// program to calculate the standard deviation of four scores
//  visit the following link to for how to calcuate standard deviation
// https://www.google.com/search?q=how+to+calculate+standard+deviation&rlz=1C5CHFA_enNG1016NG1016&oq=how+to+calculate+standard+deviation&aqs=chrome..69i57j0i512l9.19925j0j7&sourceid=chrome&ie=UTF-8

#include <iostream>
#include <cmath>
using namespace std;

double get_standard_deviation(double first_score, double second_score, double third_score, double fourth_score)
{
    const int number_of_points = 4;
    double mean = (first_score + second_score + third_score + fourth_score) / number_of_points;
    double sum_of_distance_of_entries_from_mean;

    double first_distance = pow(mean - first_score, 2);
    double second_distance = pow(mean - second_score, 2);
    double third_distance = pow(mean - third_score, 2);
    double fourth_distance = pow(mean - fourth_score, 2);

    sum_of_distance_of_entries_from_mean = first_distance + second_distance + third_distance + fourth_distance;
    double deviation = sum_of_distance_of_entries_from_mean / number_of_points;

    return sqrt(deviation);
}

int main(int argc, char const *argv[])
{
    cout << get_standard_deviation(3, 5, 7, 2) << endl;
    return 0;
}
