#include <iostream>
using namespace std;
int main() {
 int total=0;
 int testscore=0;
 int totaltests;
 int testno=0;


cout<<"Enter no of total tests";
cin>>totaltests;
 do{
    testno=testno+1;

    cout<<" enter test score for "<<testno;
    cin>>testscore;

 }while(testno<totaltests);

    return 0;
}
