#include <iostream>
using namespace std;
int main()
{
int a,b;
int sum,sub,mul,mod;
float division;
cout <<"Enter the value of a:";
cin >> a;
cout <<"Enter the value of b:";
cin >> b;
sum=a+b;
sub=a-b;
mul=a*b;
division =a/b;
cout << "SUM " << a << " + " << b << " = " << sum << "\n";
cout << "DIFFERENCE " << a << " - " << b << " = " << sub << "\n";
cout << "PRODUCT " << a << " * " << b << " = " << mul << "\n";
cout << "QUOTIENT " << a << " / " << b << " = " << division << "\n";
}
