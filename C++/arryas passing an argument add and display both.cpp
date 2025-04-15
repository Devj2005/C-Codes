#include <iostream>
using namespace std;

const int array_size=5;

//declare function to display marks
//take a id array as a parameters
//function void is used to bring no answer
//m[] is an array
int add(int m[]){
    int sum=0;
    for(int i=0;i<array_size;i++){
        sum=sum+m[i];
    }
    return sum;


}
void display(int m[]){
cout<<"DISPLAYING MARKS: "<<endl;

//display array elements
//++i is used to add to the initial i so lets say i+1=1 then 1+1=2 then 2+1=3
for(int i=0;i<array_size;++i){
    cout<<"Student "<<i+1<<":"<<m[i]<<endl;
}

}
int main(){



//declare and initialize the array
int marks[array_size]={22,55,78,66,77};
//call 'display' function
//pass array as an argument
//marks are for array elements to be accepted in the user defined function
display(marks);
cout<<add(marks)<<endl;




return 0;
}
