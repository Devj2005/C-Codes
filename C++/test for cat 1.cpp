#include <iostream>
using namespace std;
int main ()
{
    string n;
    int ab;
    int bonushours;
    int overtime;
    int payment;

cout<< "Enter Employee Name: "<<endl;
cin>>n;

cout<<"Enter number of overtime hours worked: "<<endl;
cin>>overtime;

cout<<"Enter number of hours absent: "<<endl;
cin>>ab;

bonushours= overtime-(2/3)*ab;

if (bonushours>40){
    payment=50;
}
else if (bonushours<=40){
    payment=40;}
else if (bonushours<=30){
    payment=30;}
else if (bonushours<=20){
    payment=20;}
else{
    payment=10;
}

cout<<"The bonus payment is: $"<<payment<<endl;
return 0;
}
