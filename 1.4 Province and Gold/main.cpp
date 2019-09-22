#include <iostream>
#include <vector>
using namespace std;

int main() {
  /* Gold, Silver or Copper */
  int G, S, C, G_p = 3, S_p = 2, C_p = 1;

  double buying_P = 8, buying_D = 5, buying_E = 2;
  cin >> G >> S >> C;

  /* Total money made */
  double total_pay = G * G_p + S * S_p + C * C_p;

  vector<string> toPrint;
  /* If stuff */
  if (total_pay >= buying_P) {
    toPrint.push_back("Province");
  } else if (total_pay >= buying_D) {
    toPrint.push_back("Duchy");
  } else if (total_pay >= buying_E) {
    toPrint.push_back("Estate");
  }

  if (total_pay >= 6) {
    toPrint.push_back("Gold");
  } else if (total_pay >= 3) {
    toPrint.push_back("Silver");
  } else if (total_pay >= 0) {
    toPrint.push_back("Copper");
  }
  (toPrint.size() == 1) ? cout << toPrint[0] << endl
                        : cout << toPrint[0] << " or " << toPrint[1] << endl;
}