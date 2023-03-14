#include<iostream>
using namespace std;
void findNumber(int a[],int size,int num)
{
int b = 0;
for (int i = 0; i < size; i++)
{
if (num == a[i])
{
b = 1;
break;
}
}
if (b == 1)
cout << "Element Found:" << num;
else
cout << "Element not found:" << num;
}
int main()
{
int a[10],i,size,num;
cout << "Enter size of an array:";
cin>>size;
for (i = 0; i < size; i++)
{
cout << "Enter array elements:";
cin >> a[i];
}
cout << "Enter number for search:";
cin>>num;
findNumber(a,size,num);
}
