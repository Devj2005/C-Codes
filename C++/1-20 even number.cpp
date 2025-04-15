#include <iostream>
using namespace std;

int main(){
int n; //stopping point

cout<<"ENTER STOPPING NUMBER n";
cin>>n;

for(int i=1;i<=n;i++)
    {
if (i%2==0){
    cout<<i<<"\t\t";
}
         //if you divide i by 2 remainder should be 0 and no any other number
    }
return 0;
}
