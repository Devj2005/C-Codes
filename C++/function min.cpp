
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{   int mini;
    int a,b,c,d,e;
    cout<<"Input number1: ";
    cin>>a;
    cout<<"Input number: ";
    cin>>b;
    cout<<"Input number3: ";
    cin>>c;
    cout<<"Input number4: ";
    cin>>d;
    cout<<"Input number5: ";
    cin>>e;
    mini=min({a,b,c,d,e});
    cout<< mini;
return 0;
}
