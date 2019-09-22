#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numberOfTest_int;
    cin >> numberOfTest_int;

    double g = 9.81;
    int margin_i = 1;
    float initialV_f, angle_f, initialDistance_f, minHeight_f, maxHeight_f, timeExceed_f, heightTravelled_f;

    for (int i = 0; i < numberOfTest_int; i++)
    {
        /* Enter the numbers */
        cin >> initialV_f >> angle_f >> initialDistance_f >> minHeight_f >> maxHeight_f;

        /* Calculating the time travelled has taken */
        timeExceed_f = initialDistance_f / (initialV_f * cos(angle_f * M_PI / 180));

        /* Calculating the height after travelling the distance */
        heightTravelled_f = initialV_f * timeExceed_f * sin(angle_f * M_PI / 180) - (0.5 * g * pow(timeExceed_f, 2));

        /* Safe or not safe */
        ((heightTravelled_f > minHeight_f + 1) && (heightTravelled_f < maxHeight_f - 1)) ? cout << "Safe" << endl : cout << "Not Safe" << endl;
    }
}