#include <iostream>
using namespace std;

int main()
{ int z=10;
    int x=20;
    int *y=&x;// y is a variable storing the data in x  so its a pointer to x
    cout<<"The value stored in y "<<y<<endl;
    cout<<"Y is a pointer value stored in x "<<*y<<endl;//dereference the pointer value to get back the original value stored in the memory location


    return 0;
}
