#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<char, int> my_maps;
    string inputs;

    while (cin >> inputs)
    {
        /* Following means "Increase the value of the key
        /* in the map with one. IT means that each time
        /* we have the same key it looks for it in the map
        /* and then we increase the value which is an int.
        /* the values start with 0. This is a good method
        /* to find how many times something repeats.
        */
        my_maps[inputs[0]]++;
    }

    int result = 0;
    for (auto c : my_maps)
    {
        /* Go throug the map and find the largest value. */
        result = max(result, c.second);
    }

    cout << result << endl;
}