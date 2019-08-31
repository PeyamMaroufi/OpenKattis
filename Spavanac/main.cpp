#include <iostream>
using namespace std;

struct TIME
{
    int hour;
    int minute;
};
auto timeMinus45(struct TIME t1) -> TIME
{
    TIME returnTime;
    if (t1.minute < 60 && t1.minute >= 45)
    {
        returnTime.hour = t1.hour;
        returnTime.minute = t1.minute - 45;
    }
    else if (t1.minute < 45)
    {
        returnTime.hour = t1.hour - 
    }
}
int main()
{
    struct TIME t1, t2;
    cin >> t1.hour >> t1.minute;
    cout << timeMinus45(t1) << endl;

    return 0;
}