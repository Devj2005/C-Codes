
#include <iostream>
using namespace std;
double perimeter;
double area;
int h,b,hyp;
double computearea(int x,int y)
{
area= (0.5*x*y);
return area;
}
double computeperimeter(int x, int y, int z)
{


perimeter=(x+y+z);
  return perimeter;
}

int main()
{
double answer1, answer2;
cout<<"input base";
cin>>b;
cout<<"Input height";
cin>>h;
cout<<"input hypotenuse";
cin>>hyp;
answer1= computearea(b,h);
answer2= computeperimeter(b,h,hyp);
cout<< "area = "<<answer1<<"\n";
cout<< "perimeter"<<answer2<<"\n";

return 0;
}
