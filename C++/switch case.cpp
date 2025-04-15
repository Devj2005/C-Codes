#include <iostream>


using namespace std;
int main() {
    double num1, num2;
    int choice;
    int result;
    cout<<"Enter num1: ";
    cin>>num1;

    cout<<"Enter num2: ";
    cin>>num2;
    //CREATE MENU
    cout<<"================================================= \n";
    cout<< "Operations Menu \n";
    cout<<"================================================= \n";
    cout<<"1. ADD \n";
    cout<<"2. SUBTRACT \n";
    cout<< "3. Multiplycation \n";
    cout<< "4. Division \n";
    cout<< "5. Modulus \n";
    cout<<"================================================== \n";

cout<<"Enter your choice";
cin>>choice;
switch(choice)
{
   case 1:
       {
   result=num1+num2;
   cout<<num1<<" + "<<num2<< " = "<<result;
   } break;

   case 2:
    {
        result= num1 - num2;
         cout<<num1<<" - "<<num2<< " = "<<result;
    }break;

   case 3:
    {
     result= num1*num2;
      cout<<num1<<" * "<<num2<<" = "<<result;
    }break;
   case 4:
    {
        result=num1/num2;
        cout<<num1<<" / "<<num2<<" = "<<result;
    }break;
    case 5:{
     result=num1 % num2;
     cout<<num1<<" %(mod) "<<num2<<" = "<<result;

    }  break;
    default: cout<<"Invalid choice";

}


    return 0;

}
