#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int megaByte_begin, N_month;
    vector<int> megaByte_end;
    cin >> megaByte_begin;
    cin >> N_month;
    int sum = megaByte_begin;
    for (auto i = 0; i < N_month; i++)
    {
        int use;
        cin >> use;
        megaByte_end.push_back(use);
    }

    for (auto skit : megaByte_end)
    {
        sum = sum + (megaByte_begin - skit);
    }
    cout << sum << endl;
    return 0;
}