#include <iostream>
using namespace std;
int main(){
int marks[80];
int n;
int total;
int ave;
char grade;
int id;
//no.of students
cout<<"The no of students"<<endl;
cin>>n;


for(int i=0;i<n;i++)
    {
    cout<<"Input Student ID";
    cin>>id;
    cout<<"Enter student marks";
    cin>>marks[i];

total=total+marks;
    if (marks[i]<0||marks[i]>100){
    cout<<"Error can accept <0 or >100"<<endl;
}
    }
for(int i=0;i<n;i++)
    {

    cout<<marks[i]<<"and"<<id<<endl;
    }
cout<<"total: "<<total<<endl;
ave=total/n;
cout<<"Ave: "<<ave<<endl;
if (ave<=39)
    {

    cout<<"Your class mean grade is: F"<<endl;
    }
else if (ave<=49){

    cout<<"Your class mean grade is: D"<<endl;
}
else if (ave<=59){

    cout<<"Your class mean grade is: C"<<endl;
}
else if (ave<=69){

    cout<<"Your class mean grade is: B"<<endl;
}
else if (ave>=70){

    cout<<"Your class mean grade is: A"<<endl;
}

}

    return 0;


//2<10 then cout cin is executed.
//then i++ increases i by 1.
