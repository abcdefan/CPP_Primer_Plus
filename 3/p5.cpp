#include <iostream>

int main(void)
{
    using namespace std;

    long long global_population, population_of_the_US;
    cout << "Enter the world's population: ";
    cin >> global_population;
    cout << "Enter the population of the US: ";
    cin >> population_of_the_US;
    double percentage = (double) population_of_the_US / global_population * 100;
    cout << "The population of the US is " << percentage << "% of the world population.\n";
    return 0;
}