#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    /* By some reason when looking at the combination whenever the number of switches is
    /* dividable by 2 it is possible to build a DULPO */
    (y % 2 == 0) ? cout << "possible" << endl : cout << "impossible" << endl;
}