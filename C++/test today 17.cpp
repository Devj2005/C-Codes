
#include <string>
#include <iostream>
using namespace std;
int main() {

int exam1, exam2;
int total;
double average;
string Name;

char Grade;
char X;

cout<< "Enter student Name: ";
cin>> Name;
getline(cin,Name);


cout<<Name<<"\n";

cout<< "Enter exam1 marks : ";
cin>>exam1;

cout<< "Enter exam2 marks : ";
cin>>exam2;

cin.ignore();

total= exam1 + exam2;
average= total/2;

if (average<40)
 {
     Grade= 'E';

 }
 else if(average<50)
{
    Grade= 'D';

}
else if(average<60)
{
    Grade= 'C';

}
else if(average<70)
{
    Grade= 'B';

}
else Grade= 'A';

if (average>50)
{
    X= 'P';
}
else
{
    X= 'F';
}
cout<<Name<< "Has scored "<<total<<" ,an Average of "<< average<< " and has been graded "<< Grade  <<" Hence he has "<< X ;
    return 0;
}
