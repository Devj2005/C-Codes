#include <iostream>
using namespace std;
int main(){
int marks[80];
int id[80];
int n;
int total;
double ave;
char grade;

//no.of students
cout<<"{-----------------***WELCOME***-------------------} "<<endl;
cout<<" Please input The no of students: ";
cin>>n;


for(int i=0;i<n;i++)
    {
    cout<<"Input Student ID: ";
    cin>>id[i];
    cout<<"Enter student marks: ";
    cin>>marks[i];


 if (marks[i]<0||marks[i]>100)
{
      cout<<"Error canT accept <0 or >100 and reset the program to restart inputting marks"<<endl;
      break;
}
total=total+marks[i];
    }

for(int i=0;i<n;i++)
    {

    cout<<"Student marks"<<marks[i]<<" and "<<"Student ID "<<id[i]<<endl;
    }





cout<<"Class total is: "<<total<<endl;
ave=total/n;
cout<<"Class Ave is: "<<ave<<endl;
if (ave<0||ave>100){
    cout<<"INVALID ANSWER";
}
else if (ave<=39)
    {
      grade='F';
    cout<<"Your class mean grade is: "<<grade<<endl;
    }
else if (ave<=49){
    grade='D';
    cout<<"Your class mean grade is: "<<grade<<endl;
}
else if (ave<=59){
   grade='C';
    cout<<"Your class mean grade is: "<<grade<<endl;
}
else if (ave<=69){
   grade='B';
    cout<<"Your class mean grade is: "<<grade<<endl;
}
else if (ave>=70){
  grade='A';
    cout<<"Your class mean grade is: "<<grade<<endl;
}


cout<<"---------------THANK_YOU---------------";
    return 0;
}
