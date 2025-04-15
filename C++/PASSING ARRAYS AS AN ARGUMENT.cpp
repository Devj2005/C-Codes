#include <iostream>
using namespace std;

const int arraysize=5;
//declare func to display marks
//take a 1d array as a paramaeter
//function void is used to bring no answer
//m[] is an array
void display(int m[]){
cout<<"DISPLAYING MARKS: "<<endl;

//display array elements
//++i is used to add to the initial i so lets say i+1=1 then 1+1=2 then 2+1=3
for(int i=0;i<arraysize;++i){
    cout<<"Student "<<i+1<<":"<<m[i]<<endl;
}

}
int main(){



//declare and initialize the array
int marks[arraysize]={22,55,78,66,77};
//call 'display' function
//pass array as an argument
//marks are for array elements to be accepted in the user defined function
display(marks);




return 0;
}
