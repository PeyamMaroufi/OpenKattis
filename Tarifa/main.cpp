#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int megaByte_begin, N_month;
    cin >> megaByte_begin;
    cin >> N_month;
    int sum = 0;
    for (auto i = 0; i < N_month; i++)
    {
        int monthly;
        cin >> monthly;
        sum += monthly;
    }

    cout << megaByte_begin * (N_month + 1) - sum << endl;
    return 0;
}