#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int N;
    cin >> N;

    /* The question was confusing. Do they want to see the result
    /* after all inputs or after each input.If they wanted it after
    /* it would be much easier to made this */
    vector<string> vec;
    string insertToString;
    for (int i = 1; i <= N; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2 == 0)
        {
            insertToString = to_string(temp) + " is even";
            vec.push_back(insertToString);
        }
        else
        {
            insertToString = to_string(temp) + " is odd";
            vec.push_back(insertToString);
        }
    }
    for (auto c : vec)
    {
        cout << c << endl;
    }
}