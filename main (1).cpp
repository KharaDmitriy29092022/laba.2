#include <iostream>
using namespace std;
int main() {
  cout << "Integer 19" << endl;
  int N, m;
  cout << "Seconds:";
  cin >> N;
  cout << endl;

  m = N / 60;
  cout << "minute:" << m << endl;
  cout << "Boolean 12" << endl;
  int  a, b, c;
  bool res;
  cout << "A:";
  cin >> a;
  cout << "B:";
  cin >>b;
  cout << "C:";
  cin >> c;
  res = a > 0 && b > 0 && c > 0;
  cout << "Result: " << boolalpha << res << endl;
  cout << "Math 16" << endl;
  double x = 0, y = 0, num = 0, denum = 0,pi=3.14;
  cout << "X:";
  cin >> x;
  cout << endl;

  num = pow(log(2*x+cos(37*(pi/180))),3);
  denum = pow(sin(x*x),3)+sqrt(abs(1-2*cos(x)+cos(2*x)));
  y = num / denum;
  cout << "Result:" << y << endl;
  return 0;
}