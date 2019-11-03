#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int questions_i;
    cin >> questions_i;
    string correct_answer_s;
    cin >> correct_answer_s;

    int adrian_i = 0, bruno_i = 0, goran_i = 0;
    for (int i = 0; i < correct_answer_s.length(); i++)
    {
        /* Sequence of Adrian */
        /* 1%3 is 1 */
        /* 2%3 is 2 */
        switch (i % 3)
        {
        case 0:
            if (correct_answer_s[i] == 'A')
                adrian_i++;
            break;
        case 1:
            if (correct_answer_s[i] == 'B')
                adrian_i++;
            break;
        case 2:
            if (correct_answer_s[i] == 'C')
                adrian_i++;
            break;
        }

        /* Sequence of Bruno */
        /* 1%4 is 1 */
        /* 2%4 is 2 */
        /* 3%4 is 3 */
        switch (i % 4)
        {
        case 0:
            if (correct_answer_s[i] == 'B')
                bruno_i++;
            break;
        case 1:
            if (correct_answer_s[i] == 'A')
                bruno_i++;
            break;
        case 2:
            if (correct_answer_s[i] == 'B')
                bruno_i++;
            break;
        case 3:
            if (correct_answer_s[i] == 'C')
                bruno_i++;
            break;
        }

        /* Sequence of Goran */
        /* 1%6 is 1 */
        /* 2%6 is 2 */
        /* 3%6 is 3 */
        /* 4%6 is 4 */
        /* 5%6 is 5 */
        switch (i % 6)
        {
        case 0:
            if (correct_answer_s[i] == 'C')
                goran_i++;
            break;
        case 1:
            if (correct_answer_s[i] == 'C')
                goran_i++;
            break;
        case 2:
            if (correct_answer_s[i] == 'A')
                goran_i++;
            break;
        case 3:
            if (correct_answer_s[i] == 'A')
                goran_i++;
            break;
        case 4:
            if (correct_answer_s[i] == 'B')
                goran_i++;
            break;
        case 5:
            if (correct_answer_s[i] == 'B')
                goran_i++;
            break;
        }
    }

    int max_i = max(max(adrian_i, bruno_i), goran_i);

    cout << max_i << endl;
    if (adrian_i == max_i)
        cout << "Adrian" << endl;
    if (bruno_i == max_i)
        cout << "Bruno" << endl;
    if (goran_i == max_i)
        cout << "Goran" << endl;
}