
#include <iostream>
using namespace std;
double r;
double c;
double area;
double circumference;
const double f=22.0/7.0;
const int w=2;
int a;


double calcarea(int x){
area=f*x*x;

cout<<"a= "<<area<<endl;
return area;
}
double calccircum(int x){
circumference=w*f*x;
cout<<"c= "<<circumference<<endl;
return circumference;
}

void all(double x){
calccircum(x);
calcarea(x);


}


int main(){

cout<<"Radius is: ";
cin>>r;


all(r);

return 0;
}
