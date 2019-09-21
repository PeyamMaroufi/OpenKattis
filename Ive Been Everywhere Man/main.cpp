#include <iostream>
#include <set>
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    set<string> myCities;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            string temp;
            cin >> temp;
            myCities.insert(temp);
        }
        cout << myCities.size() << endl;

        /* The set is still in the loop and you need to clear
        /* the content before going for the next iteration. */
        myCities.clear();
    }
}