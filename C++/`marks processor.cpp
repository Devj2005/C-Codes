#include <iostream>
using namespace std;
struct students /*array*/ {
    //stores elements of different data types
    string name;
    double exam1;
    double exam2;
    double total;
    double average;
    char grade;
};
int main()
{double exam1;
double exam2;
    struct students S[100]; //array
    int n;
    cout<<"The number of students in the class "<<endl;
    cin>>n;


    for (int i=0;i<n;i++)
    {
        cout<<"Enter student name : ";
        cin>>S[i].name;
if(exam1<0||exam1>100){
    cout<<"Error"<<endl;
    break;}

        cout<<"Enter exam1 marks"<<endl;
        cin>>S[i].exam1;
 if (exam2<0||exam2>100)
    {
        cout<<"Error"<<endl;
        break;
}
        cout<<"Enter exam2 marks"<<endl;
        cin>>S[i].exam2;

        S[i].total=S[i].exam1+S[i].exam2;
        S[i].average= S[i].total/ 2;


        if(S[i].average<0||S[i].average>100)
        {
            cout<<"This is invalid cant be >100 and <0"<<endl;
            break;
        }

        else if (S[i].average<40)
        {
            S[i].grade='E';

        }
        else if (S[i].average<50)
        {
            S[i].grade='D';

        }
        else if (S[i].average<60)
        {
            S[i].grade='C';

        }
        else if (S[i].average<70)
        {
            S[i].grade='B';

        }
        else
        {
            S[i].grade='A';

        }
    }
for (int i=0;i<n;i++)
{
    cout<<S[i].name<<"\t"<<S[i].exam1<<"\t"<<S[i].exam2<<"\t"<<S[i].total<<"\t"<<S[i].average<<"\t"<<S[i].grade<<endl;
}





return 0;
}


