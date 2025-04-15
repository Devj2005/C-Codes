#include <iostream>
using namespace std;

int power(int base, int exponent){

if(exponent==0)
    return 1;
else
    return  base*power(base,exponent-1);

}
int main()
{
int base;
int exponent;
int answer;

cout<<"Input base = ";
cin>> base;

cout<<"Input exponent = ";
cin>> exponent;

answer=power(base,exponent);




cout<<answer;

return 0;
}
