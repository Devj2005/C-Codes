#include <iostream>
using namespace std;

int main()
{ string a= "Tom";
string *b=&a;
cout<<"The pointer b is the address of a is "<<b<<endl;
cout<<"The value stored in a via the memory location is "<<*b<<endl;
double c=31.5;
double *d=&c;
cout<<"The pointer d is the address of c is "<<d<<endl;
cout<<"The value stored in a via the memory location is "<<*d<<endl;


    return 0;
}
