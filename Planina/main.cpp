#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;

    /* The idea is to obtain a mathematical algorithm. Google
    /* the mathematics and write own algorithm */

    long long result = pow((pow(2, N) + 1), 2);
    cout << result << endl;
}