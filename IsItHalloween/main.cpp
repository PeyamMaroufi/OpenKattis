#include <iostream>
using namespace std;

int main()
{

    string Month, Day;
    cin >> Month >> Day;
    ((Month == "OCT" && Day == "31") || (Month == "DEC" && Day == "25"))
        ? cout << "yup" << endl
        : cout << "nope" << endl;
}