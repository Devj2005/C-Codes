#include <iostream>
using namespace std;
int main() {
    int i;
    int j;
    int r=1;
    for(int i=1;i<6;i=i+1)
    {


        for(int j=1;j<6;j=j+1)
            {
            cout<<i*j<<"   ";
        if (r==5){

            cout<<endl;
            r=0;
        }
        r++;
        }
    }



















return 0;
}
