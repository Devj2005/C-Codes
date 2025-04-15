#include <iostream>
using namespace std;
int main()
{
float exam1;
float exam2;
double Total;
double Avg;
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
Avg=Total/2;

if(Avg>=50)
{
 remark="Passed";
}
else
{
 remark="Fail";

}




cout << "Sum= " << Total << "\n";
cout << exam1 << " + " << exam2 << " = " <<Total << "\n";
cout << "Average=" << Avg << "\n";
cout<< name << "You have" << remark << ".";
return 0;
}