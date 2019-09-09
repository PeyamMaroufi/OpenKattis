#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long int r, e, c;
    for (int i = 0; i < n; i++)
    {
        cin >> r >> e >> c;
        (r > (e - c)) ? cout << "do not advertise" << endl : (r == (e - c)) ? cout << "does not matter" << endl : cout << "advertise" << endl;
    }
}