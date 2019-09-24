#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numOfname_i, sets = 1;

    string temp_name1;
    vector<string> names;

    while (cin >> numOfname_i && numOfname_i != 0)
    {
        for (int i = 0; i < numOfname_i; i++)
        {
            cin >> temp_name1;
            names.push_back(temp_name1);
        }

        cout << "SET " << sets << endl;
        /* Odd number of names. */
        if (names.size() % 2)
        {
            int i = 0;
            for (i; i < names.size(); i += 2)
            {
                cout << names[i] << endl;
            }
            i -= 3;
            for (i; i >= 0; i -= 2)
            {
                cout << names[i] << endl;
            }
        }
        /* Even number of names. */
        else
        {
            int i = 0;
            for (i; i < names.size(); i += 2)
            {
                cout << names[i] << endl;
            }
            i -= 1;
            for (i; i >= 0; i -= 2)
            {
                cout << names[i] << endl;
            }
        }

        sets++;
        /* It is a while loop and we are gonna use the same vector
        /* that is why we need to clear it otherwise it gets bigger
        /* and bigger */
        names.clear();
    }
}