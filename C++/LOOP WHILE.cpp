#include <iostream>
using namespace std;
int main()
{
    // Declare variables
    int subjectnumber=1;
    int score;
    double average;
    int total=0;
    string name;
    char grade;
    //Input name
    cout<<"Enter name: ";
    getline(cin,name);
    //Input subject scores
    do
    {
        cout<<"Enter subject score "<<subjectnumber<<":";
        cin>>score;
        subjectnumber=subjectnumber+1;
        //CURRENT PLUS NEW SCORE
       total=total+score;

    }
    while(subjectnumber<=5);
    //while(n<=5){
//cout<<"Enter test"<<subjectnumber<<"score"
//cin>>score;
  //  total=total+score
  // subjectnumber++/subjectnummber=subjectnumber+1
   //  }
    //Totals and averages
    cout<<"Total= "<<total<<"\n";
     average=total/5;
    cout<<"Average= "<<average<<"\n";

    if(average<0 || average>100)
    {
        cout<<" This is Invalid!!!";
    }
    else if(average>=70)
    {
        grade='A';
        cout<<"Your grade is "<<grade;
    }
    else if(average>=60)
    {
        grade='B';
        cout<<"Your grade is "<<grade;
    }
    else if(average>=50)
    {
        grade='C';
        cout<<"Your grade is "<<grade;
    }
    else if(average>=40)
    {
    grade='D';
    cout<<"Your grade is "<<grade;
    }
    else
    {
        grade='E';
        cout<<"Your grade is "<<grade;
    }





    return 0;
}
