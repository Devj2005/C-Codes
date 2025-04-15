#include <iostream>
using namespace std;

void disp1sum(int n[][2]){
    cout << "Displaying values of the first array" << endl;
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 2; ++j){
            cout << "num[" << i << "][" << j << "]: " << n[i][j] << endl;
        }
    }
}
void disp2sum(int p[][2]){
         cout<<"Displaying values FOR SECOND ARRAY"<<endl;
         for(int k=0;k<3;++k){
            for(int m=0;m<2;++m){

                cout<<"num["<< k<<"]["<<m<<"]: "<<p[k][m]<<endl;

            }

         }

          }
void TOTAL(int n[][2],int p[][2],int y[][2]){
   cout<<"Displaying values for sum"<<endl;
cout<<"-------------------------"<<endl;
for(int d=0;d<3;++d){
            for(int s=0;s<2;++s){
                y[d][s] = n[d][s] + p[d][s];
                cout<<"num["<<d<<"]["<<s<<"]: "<<y[d][s]<<endl;



            }

         }

          }

int main (){
int num[3][2]={

{2,4},
{4,5},
{6,1}
    };
    int num2[3][2]={

{2,0},
{1,6},
{2,7}
    };
    int sum[3][2];
TOTAL(num,num2,sum);




disp1sum(num);
disp2sum(num2);






cout<< "TOTAL= "<<TOTAL;

return 0;
}
