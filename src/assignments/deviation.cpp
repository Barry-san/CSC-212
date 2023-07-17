#include <iostream>
#include <cmath>
using namespace std;

double get_standard_deviation(double first_score, double second_score, double third_score, double fourth_score);

// Test case
// Inputs are 3, 5, 7, 2
// expected output is 1.92029
int main()
{
    cout << get_standard_deviation(3, 5, 7, 2) << endl;
    return 0;
}

// Function definition
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

    // standard deviation is the square root of variance
    double variance = sum_of_distance_of_entries_from_mean / number_of_points;
    // return the square root of the variance as our final outout
    return sqrt(variance);
}
