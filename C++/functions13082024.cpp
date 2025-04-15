
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
// A program that uses the pow() built in function
// To calculate the power of a number
//Given the base and the exponent as arguments
int x;
int y;
int Power;
cout << "Enter the Base :";
cin>>x;
cout<<"Enter the Exponent : ";
cin>>y;
Power=pow(x,y);
cout<<x<<"raised to power"<<y<<" = " <<Power;
return 0;
}
