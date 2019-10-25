#include <iostream>
#include <set>
using namespace std;
int main()
{
    string words;
    set<string> setOfString;
    bool isItRepeaed = false;
    while (cin >> words && !isItRepeaed)
    {
        /* cout: if words is not a member of the set */
        if (!setOfString.count(words))
            setOfString.insert(words);
        else
            isItRepeaed = true;
    }
    if (isItRepeaed)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
}
