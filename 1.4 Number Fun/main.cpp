#include <iostream>
using namespace std;
int main()
{
    int number_case;
    cin >> number_case;
    for (int i = 0; i < number_case; i++)
    {
        /* Using double the division will not get rounded up or down to an integer. */
        double a, b, c;
        cin >> a >> b >> c;
        if (a + b == c || abs(a - b) == c || a / b == c || b / a == c || a * b == c)
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
}