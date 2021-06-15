#include<iostream>
using namespace std;

int main()
{
int lions,ins;
cin>>lions;

int h[lions];
int w[lions];
int hw[lions];
 
for (int flaa=0;flaa<lions;flaa++){
        cin>>h[flaa];
        } 
for (int flan=0;flan<lions;flan++){
        cin>>w[flan];
        }
for (int fla=0;fla<lions;fla++){
        hw[fla]=w[fla]*h[fla];
        }
   int g=0;
   
        for(int aa=1;aa<lions;aa++){
        	if(hw[g]>hw[aa]){
        	g=aa;
        }
        }
     cout<<h[g]<<" "<<w[g];
     
   }
        	                
