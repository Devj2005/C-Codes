// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
float exam1;
float exam2;
double Total;
double avg;
char Grade;

string name;
string remark;
cout<<"Enter Student Name:";
getline(cin,name);
//Exam marks
cout<< "Enter exam1:";
cin>>exam1;

cout<< "Enter exam2:";
cin>>exam2;
Total=exam1+exam2;
avg=Total/2;
if (avg<40)
 {
     Grade= 'E';

 }
 else if(avg<50)
{
    Grade= 'D';

}
else if(avg<60)
{
    Grade= 'C';
}
else if(avg<70)
{
    Grade= 'B';
}
else Grade= 'A';

if(avg>=50)
{
 remark="Passed";
}
else
{
 remark="Failed";

}

cout << "Sum= " << Total << "\n";
cout << exam1 << " + " << exam2 << " = " <<Total << "\n";
cout << "Average=" << avg << "\n";
cout<< name << "You have" << remark<< "and your grade is:" << Grade;
return 0;
}
