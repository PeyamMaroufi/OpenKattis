#include <iostream>

auto getResult(int x) -> int
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    int min, max, digits;
    std::cin >> min >> max >> digits;

    for (int i = min; i <= max; i++)
    {
        if (getResult(i) == digits)
        {
            std::cout << i << std::endl;
            break;
        }
    }

    for (int i = max; i >= min; i--)
    {
        if (getResult(i) == digits)
        {
            std::cout << i << std::endl;
            break;
        }
    }
    return 0;
}