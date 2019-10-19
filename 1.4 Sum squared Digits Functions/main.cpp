#include <iostream>
using namespace std;

void GetSumDigit();
int main()
{
    /* Number of test acts */
    int numOfTest_i;
    cin >> numOfTest_i;
    for (int i = 0; i < numOfTest_i; i++)
    {
        GetSumDigit();
    }
}
void GetSumDigit()
{
    int result = 0, k, b, n;
    cin >> k >> b >> n;
    while (n > 0)
    {
        result += (n % b) * (n % b);
        n /= b;
    }
    cout << k << " " << result << endl;
}