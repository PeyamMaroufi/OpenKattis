#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    double h, w;
    cin >> n >> h >> w;
    double l = sqrt(pow(h, 2) + pow(w, 2));

    for (int i = 1; i <= n; i++)
    {
        int length;
        cin >> length;
        if (length <= l)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NE" << endl;
        }
    }
}