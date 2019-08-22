#include <iostream>
using namespace std;
int main()
{
    int numberOfStones;
    cin >> numberOfStones;
    cout << ((numberOfStones % 2 == 0) ? "Bob" : "Alice") << endl;
    return 0;
}