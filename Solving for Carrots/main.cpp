#include <iostream>

int main()
{
    int contestants, huffle_pff;
    std::cin >> contestants >> huffle_pff;
    std::string description;
    for (int i = 1; i <= contestants; i++)
    {
        std::cin >> description;
    }
    std::cout << huffle_pff << std::endl;
    return 0;
}