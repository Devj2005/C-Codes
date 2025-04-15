#include <iostream>
using namespace std;
int main() {
    //Const remains constant
const int Correctpin =3040;
//chances=3
int chances=3;
int pin;
while(chances>0)
{


cout<<endl<<"Please enter your pin: ";
cin>>pin;

if (pin==Correctpin)
    {

    cout<<"Congrats,Correct pin";
    //Program stops there its doesnt execute.(break)
    break;
}
else{

   cout<<"Incorrect pin"<<endl;
   if (chances>1){

    cout<<"Hint: It is a 4 number pin"<<endl;
   }

    //chances=chances-1
    chances-=1;
    cout<<"You have only "<<chances<<" chances left"<<endl;
}
if (chances==0)
{
    cout<<"No more chances left. Visit the nearest Safaricom support centre";
}

}

    return 0;
}
