
#include <iostream>
using namespace std;
int add(int x,int y) //formal parameters
{
    int total;
    total=x+y;

    return total;

}
int main()
{
    int result;
    int a;
    int b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    result= add(a,b); //actual parameters
    cout<<result;
return 0;
}
