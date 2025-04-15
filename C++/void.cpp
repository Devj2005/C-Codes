
#include <iostream>
using namespace std;
int a;
int b;
//global variables accessed inside any functions.
int add(int x,int y)//function1
{
    int total;
    total=x+y;

    return total;

}
void input(){//function2
/*int a;
int b;*/
//local variables
cout<<"Enter 1st number: ";
cin>>a;
cout<<"Enter 2nd number: ";
cin>>b;
}
int main()//function3
{
    int result;
    input ();
    result= add(a,b);
    cout<<result;
return 0;
}
