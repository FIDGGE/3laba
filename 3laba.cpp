#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int Ga = 90000;
  int Re = 61000;
  double W;
  double A;
  double Pe;
  
  cout << "Enter W: ";
  cin  >> W;
  
  while (W > 0) {
    A = W * pow(Re, 0.11);
    
    if (A < 1) {
      Pe = 4.75 * pow(A, 1.4) * pow(Ga, -0.17);
    } else {
        Pe = 0.00225 * pow(A, -3.3) * pow(Ga, 0.29);
    }
    
    cout << "W = " << W << ", Pe = " << Pe << ", A = " << A << endl;
    
    cout << "Enter next W: ";
    cin  >> W;
  }
  
  return 0;
}
