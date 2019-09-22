#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
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