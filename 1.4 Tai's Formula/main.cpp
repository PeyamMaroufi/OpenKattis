#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

/* Solution 1. This one is better*/
int main()
{
    /* Number of pairs */
    int i;
    cin >> i;

    if (i > 0)
    {
        /* Get the first pair of input */
        double t, g;
        cin >> t >> g;
        double t1, g1, area = 0;

        /* Get the rest of the points and swap the values of g1 and g etc. */
        for (int z = 1; z < i; z++)
        {
            cin >> t1 >> g1;
            area += ((g1 + g) / 2) * (t1 - t);
            t = t1;
            g = g1;
        }

        /* Output the result */
        cout << fixed << setprecision(5) << area / 1000 << endl;
    }
}

/* Solution 2 */
int main()
{
    int numOfSamples_i;
    cin >> numOfSamples_i;
    vector<pair<double, double>> sampleTimeGlucos_vi;
    double area = 0;

    /* Temporary values to insert to the vectors */
    double sampleTimeTemp_d;
    double glucosTemp_d;

    /* Getting values from the user */
    for (int i = 0; i < numOfSamples_i; i++)
    {
        cin >> sampleTimeTemp_d >> glucosTemp_d;
        sampleTimeGlucos_vi.push_back(make_pair(sampleTimeTemp_d, glucosTemp_d));
    }

    /* Calculate the area under the curve */
    for (int i = 0; i < numOfSamples_i - 1; i++)
    {
        area += ((sampleTimeGlucos_vi[i].second + sampleTimeGlucos_vi[i + 1].second) / 2) * (sampleTimeGlucos_vi[i + 1].first - sampleTimeGlucos_vi[i].first);
    }

    /* Print result */
    cout << fixed << setprecision(5) << area / 1000 << endl;
}