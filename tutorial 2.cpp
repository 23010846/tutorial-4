#include <iostream>
#include <cmath>
using namespace std;


double calcDistance (int x, int y, int a, int  b) {
return sqrt(pow((x-a), 2 + pow((y-b), 2)));
}

int main() {
  double  x1, x2, y1, y2, distance;

cout << "Enter the value of x1: ";
  cin >> x1;
  cout << "Enter the value of x2: ";
  cin >> x2;
  cout << "Enter the value of y1: ";
  cin >> y1;
  cout << "Enter the value of y2: ";
  cin >> y2;

  distance = calcDistance (x1, y1, x2, y2);
cout<< "The distance between point 1 and point 2 is" <<distance ;

  return 0;
}
