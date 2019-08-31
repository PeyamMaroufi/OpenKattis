#include <iostream>
using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;
    h--;
    m -= 45;

    /* What if the minutes go above 60? */
    if (m < 0)
    {
        m += 60;
    }
    else if (m == 0)
    {
        m = 0;
        h++;
    }
    else if (m > 0)
    {
        h++;
    }

    /* What if the time is 0:45? */
    if (h < 0)
        h += 24;

    cout << h << " " << m << endl;

    return 0;
}