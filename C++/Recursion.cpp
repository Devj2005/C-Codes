#include <iostream>
using namespace std;
int f (int n)


{


if(n==0||n==1)
    return 1;
else
return n * f(n-1);}

int main()
{
int x;
int Answer;
cout<<"Enter a number : ";
cin>>x;
Answer=f(x);
cout<<x<< "! = "<<Answer;
return 0;
}
