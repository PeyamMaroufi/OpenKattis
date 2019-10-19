#include <iostream>
using namespace std;

int main()
{
    int days, d = -1, result = -1, j;

    cin >> days;
    for (int i = 0; i < days; i++)
    {
        cin >> j;
        if (d == -1 || j < d)
        {
            d = j;
            result = i;
        }
    }

    cout << result << endl;
}