#include <iostream>
#include <iomanip>

using namespace std;

// 2.3
// 2.3
// 2.123456
// 2.123456
// 2.123456
int main() {
// Don't think I need 5 variables as there are just 2 different numbers
  double a = 2.3;
  //float b = 2.3;
  double c = 2.123456;
  //float d = 2.123456;
  //float e = 2.123456;

  cout << setprecision(2) << a << endl 
  << fixed << setprecision(2) << a << endl 
  << setprecision(6) << c << endl
  << setprecision(2) << c << endl
  << setprecision(0) << c << endl;
}

// cout << fixed << showpoint << setprecision(1);
// cout << x << endl;
// cout << setprescision(2);
// cout << x << endl;
// cout << setprescision(6);
// cout << y << endl;
// cout << setprescision(2);
// cout << setprescsiion(0) << noshowpoint;
// cout << y << endl
// or
// int z = y;
// cout << z << endl;