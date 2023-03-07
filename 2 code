#include <iostream>
using namespace std;
int main()
{
int a,b=0,n,m;
cout << " Input any number: ";
cin >> a;
for (n=a - 1;n>=1;n--)
{
for (m=2;m<n;m++)
{
if (n % m == 0)
b++;
}
if (b == 0)
{
if (n == 1)
{
cout << "There is no prime number less than 2";
break;
}
cout << n << " is the last prime number before " << a << endl;
break;
}
b = 0;
}
}
