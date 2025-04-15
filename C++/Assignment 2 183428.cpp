#include <iostream>
using namespace std;
const int sizes=4;
double numb[sizes];
double sum=0;
double mean = 0;
double denominator=0;
double numerator = 0 ;
double variance =0;

void input();
void getdenominator();
void getnumerator();
void getmean();
void getvariance();

int main(){
 cout<<"||-----------------WELCOME TO VARIANCE CALCULATOR----------------||"<<endl;
getvariance();

return 0;
}

void getvariance( )
{

input();
getmean();
getnumerator();
getdenominator();

variance = numerator / denominator;
cout<<"Variance is "<<variance<<endl;
 cout<<"||------------------------THE END---------------------||"<<endl;
}

void input()
{
for(int i=0;i<sizes;i++)
    {
       cout << "Enter numbers "<<i+1<<":"<<endl;
       cin>> numb[i];
    }
}
void getmean()
{int i= 0;
 sum=0;
    while (i<sizes)
    {
        sum=sum+numb[i];
        i++;
    }

    mean=sum / sizes;
     cout<<"---------------------------------"<<endl;
    cout<<"Mean= "<<mean<<endl;

    cout<<"---------------------------------"<<endl;
    cout<<"Sum= "<<sum<<endl;
    cout<<"---------------------------------"<<endl;
}
void getnumerator()
{ int i= 0;
numerator=0;
    while (i<sizes)
    {

     numerator= numerator+((numb[i]-mean)*(numb[i]-mean));
     i++;
    }

    cout<<"Numerator="<<numerator<<endl;
     cout<<"---------------------------------"<<endl;

}
void getdenominator()
{
 int i=0;
    denominator=sizes-1;
    cout<<"DENOMINATOR= "<<denominator<<endl;
     cout<<"---------------------------------"<<endl;
}







