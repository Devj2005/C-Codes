#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct taxation /*array*/ {
    //stores elements of different data types
    string name;
    int empno;
    int grade;
    int salary;
    double Transportallow;
    double Hseallow;
    double gross;
    double tax;
    double Net;


}; //dont forget (;)
//save data permanently on local drive
//command to print the functions
//TABLE BORDER
//ifstream ofstream
void functionx();

int main (){
functionx();
   return 0;
}

void functionx()
{
    ofstream outfile;
outfile.open("C:/Users/devya/OneDrive - Strathmore University/Documents/test.txt",ios::app);
if (outfile.is_open()){
  cout<<"Enter employee details"<<endl;


}
{ struct taxation e[300]; //e is an object
int n;
 cout<<"Enter number of employees; ";
 cin>>n;

 for(int i = 0; i<n ; i++)
 {
     cout<<"Enter employee number : ";
        cin>>e[i].empno;
     cout<<"Enter employee name : ";
        cin>>e[i].name;
     cout<<"Enter salary: ";
        cin>>e[i].salary;
    cout<<"||transport allowance||"<<"\t"<<"||House allowance||"<<endl<<"Grade 1= 8% of basic salary"<<"\t"<<"Grade 1= 10% of basic salary"<<endl<<"Grade 2= 10% of basic salary"<<"\t"<<"Grade 2= 13% of basic salary"<<endl<<"Grade 3= 12% of basic salary"<<"\t"<<"Grade 3= 15% of basic salary"<<endl<<"Grade 4= 15% of basic salary"<<"\t"<<"Grade 4= 17% of basic salary"<<endl<<"Grade 5= 18% of basic salary"<<"\t"<<"Grade 5= 20% of basic salary"<<endl<<"Grade 6= 20% of basic salary"<<"\t"<<"Grade 6= 22% of basic salary"<<endl;
   cout<<"Enter grade: ";
        cin>>e[i].grade;

   if(e[i].grade<1||e[i].grade>6)
    {
    cout<<"Error choose 1 option between 1 and 6. Restart program"<<endl;
   break;
    }
    else{
    if (e[i].grade==1)
        {
        e[i].Transportallow=0.08 *e[i].salary;
        e[i].Hseallow =0.1 *e[i].salary;
        e[i].tax = 0.3* e[i].salary;
        e[i].gross = e[i].salary + e[i].Hseallow+ e[i].Transportallow;
        e[i].Net=e[i].gross-e[i].tax;

    }
      if (e[i].grade==2)
        {
        e[i].Transportallow=0.1 *e[i].salary;
        e[i].Hseallow =0.13 *e[i].salary;
        e[i].tax = 0.3* e[i].salary;
        e[i].gross = e[i].salary + e[i].Hseallow+ e[i].Transportallow;
        e[i].Net=e[i].gross-e[i].tax;

    }
         if (e[i].grade==3)
        {
        e[i].Transportallow=0.12*e[i].salary;
        e[i].Hseallow =0.15 *e[i].salary;
        e[i].tax = 0.3* e[i].salary;
        e[i].gross = e[i].salary + e[i].Hseallow+ e[i].Transportallow;
        e[i].Net=e[i].gross-e[i].tax;

    }
         if (e[i].grade==4)
        {
        e[i].Transportallow=0.15*e[i].salary;
        e[i].Hseallow =0.17 *e[i].salary;
        e[i].tax = 0.3* e[i].salary;
        e[i].gross = e[i].salary + e[i].Hseallow+ e[i].Transportallow;
        e[i].Net=e[i].gross-e[i].tax;

    }
      if (e[i].grade==5)
        {
        e[i].Transportallow=0.18*e[i].salary;
        e[i].Hseallow =0.2 *e[i].salary;
        e[i].tax = 0.3* e[i].salary;
        e[i].gross = e[i].salary + e[i].Hseallow+ e[i].Transportallow;
        e[i].Net=e[i].gross-e[i].tax;

    }
         if (e[i].grade==6)
        {
        e[i].Transportallow=0.2 *e[i].salary;
        e[i].Hseallow =0.22 *e[i].salary;
        e[i].tax = 0.3* e[i].salary;
        e[i].gross = e[i].salary + e[i].Hseallow+ e[i].Transportallow;
        e[i].Net=e[i].gross-e[i].tax;


    }

    }
    for (int i=0 ;i<n; i++)
cout<<"Name"<<e[i].name<<"\t\t"<<"EmployeeNumber"<<e[i].empno<<"\t\t"<<"Salary"<<e[i].salary<<"\t\t"<<"Grade"<<e[i].grade<<"\t\t"<<"transport all"<<e[i].Transportallow<<"\t\t"<<"Hse allow"<<e[i].Hseallow<<"\t\t"<<"Gross"<<e[i].gross<<"\t\t"<<"Tax"<<e[i].tax<<"\t\t"<<"Net"<<e[i].Net<<endl;
cout<<e[i].name<<"\t\t"<<e[i].empno<<"\t\t"<<e[i].salary<<"\t\t"<<e[i].grade<<"\t\t"<<e[i].Transportallow<<"\t\t"<<e[i].Hseallow<<"\t\t"<<e[i].gross<<"\t\t"<<e[i].tax<<"\t\t"<<e[i].Net<<endl;
outfile << e[i].name << "\t" << e[i].empno << "\t" << e[i].salary << "\t"
                    << e[i].grade << "\t" << e[i].Transportallow << "\t" << e[i].Hseallow
                    << "\t" << e[i].gross << "\t" << e[i].tax << "\t" << e[i].Net << endl;


 }
outfile.close();
cout<<"All data has been saved to test.txt"<<endl;

}
}
