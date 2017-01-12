#include <iostream>

using namespace std;
// Xinyuan (Daniel) Zhu
// January 11th 2017
int main() {
  /*
    Coefficients of the system
      ax + by = c
      dx + ey = f
  */
  int a, b, c, d, e, f, x, y;
  
  /*
    TODO: Write your code here

    1. Read input by
       cin >> ......;
    2. Solve for x and y
    3. Print x and y by
        cout << SOLUTION_OF_X << "\n";
        cout << SOLUTION_OF_Y << "\n";
  */
  cin >> a >> b >> c >> d >> e >> f;
  x = (c*e-f*b)/(a*e-d*b);
  y = (a*f-d*c)/(a*e-d*b);
  cout << x << "\n";
  cout << y << "\n"; 
  return 0;
}
