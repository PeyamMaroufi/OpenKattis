#include <iostream>
int main()
{
    int num1;
    int num2;
    std::cin >> num1;
    std::cin >> num2;
    if (num1 > 0 && num2 > 0)
    {
        std::cout << 1 << std::endl;
    }
    else if (num1 > 0 && num2 < 0)
    {
        std::cout << 4 << std::endl;
    }
    else if (num1 < 0 && num2 > 0)
    {
        std::cout << 2 << std::endl;
    }
    else
    {
        std::cout << 3 << std::endl;
    }
    return 0;
}