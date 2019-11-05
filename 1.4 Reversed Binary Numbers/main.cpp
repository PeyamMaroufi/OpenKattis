#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rev = 0;
    while (n > 0)
    {
        /* Shift by one */
        rev <<= 1;
        /* In case the number is 1 */
        if (n & 1)
        {
            rev ^= 1;
        }
        /* Shift right */
        n >>= 1;
    }
    cout << rev << endl;
}