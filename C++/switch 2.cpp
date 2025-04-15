#include <iostream>
#include <cmath>


using namespace std;
int main() {
    int num1, num2;
    char choice;
    int result;
    cout<<"Enter num1: ";
    cin>>num1;

    cout<<"Enter num2: ";
    cin>>num2;
    //CREATE MENU
    cout<<"================================================= \n";
    cout<< "Operations Menu \n";
    cout<<"================================================= \n";
    cout<<" + \n";
    cout<<" - \n";
    cout<< " * \n";
    cout<< " / \n";
    cout<< " % \n";
    cout<<"================================================== \n";

cout<<"Enter your choice";
cin>>choice;
switch(choice)
{
   case '+':
       {
   result=num1+num2;
   cout<<num1<<" + "<<num2<< " = "<<result;
   } break;

   case '-':
    {
        result= num1 - num2;
         cout<<num1<<" - "<<num2<< " = "<<result;
    }break;

   case '*':
    {
     result= num1*num2;
      cout<<num1<<" * "<<num2<<" = "<<result;
    }break;
   case '/':
    {
        result=num1/num2;
        cout<<num1<<" / "<<num2<<" = "<<result;
    }break;
    case '%':{
       if (static_cast<int>(num2) != 0) {
                result = fmod(num1, num2); // Floating-point modulo
                cout << num1 << " % " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;

    }  break;
    default: cout<<"Invalid choice";

}


    return 0;

}
