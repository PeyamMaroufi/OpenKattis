#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, sum = -1, max_index = -1, temp;

    /* Let the user input the scores and terminate those that
    /* are less than the max. */
    for (int i = 1; i < 6; i++)
    {
        cin >> a >> b >> c >> d;
        temp = a + b + c + d;
        if (temp > sum)
        {
            sum = a + b + c + d;
            max_index = i;
        }
    }
    cout << max_index << " " << sum << endl;
}