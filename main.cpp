//Zachary Hoppock
//math.cpp
//9/12/2020
//Do some mathematics
//Version  #1
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
double x = 2.5;
double y = -1.5;
int m = 18;
int n = 4;

double a = x + n * y - (x + n) * y;
cout << a << endl;

double b = m / n + m % n;
cout << b << endl;

double c = 5 * x - n / 5;
cout << c << endl;

double d = 1 - (1 - (1 - (1 - (1 - n))));
cout << d << endl;

double e = sqrt(sqrt(n));
cout << e << endl;

  return 0;
}