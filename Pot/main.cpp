#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N;
    cin >> N;

    int num, lastDigit;
    long long sum = 0;
    for (int i = 1; i <= N; i++)
    {
        int temp;
        cin >> temp;

        /* % is way of getting the last digit. */
        lastDigit = temp % 10;

        /* An int divided by 10 is one digit shorter. */
        num = temp / 10;

        /* Reusing temp variable. */
        temp = pow(num, lastDigit);
        sum += temp;
    }
    cout << sum << endl;
}