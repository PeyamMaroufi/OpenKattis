#include <iostream>
#include <vector>
#include <iomanip>
int main()
{
    int numOfPeriod;
    std::vector<std::pair<double, double>> quality_year;
    std::cin >> numOfPeriod;
    double firstNum = 0, secNum = 0;

    for (int i = 1; i <= numOfPeriod; i++)
    {
        std::cin >> firstNum >> secNum;
        quality_year.push_back(std::make_pair(firstNum, secNum));
    }
    double sum = 0;

    /* C++ 11 way */
    for (auto const &value : quality_year)
    {
        sum = sum + value.first * value.second;
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(3);
    std::cout << sum << std::endl;
    return 0;
}