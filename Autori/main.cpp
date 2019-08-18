#include <iostream>
int main()
{
    std::string name;
    std::string reserve;
    std::cin >> name;

    /* Catching first char */
    reserve.push_back(name[0]);
    /* Loop though */
    for (int i = 1; i < name.size(); i++)
    {
        if (name[i] == '-')
        {
            reserve.push_back(name[i + 1]);
        }
    }
    std::cout << reserve << std::endl;

    return 0;
}