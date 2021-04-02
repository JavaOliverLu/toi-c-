#include<iostream>
using namespace std;

int main()
{
int ant,ins;
cin>>ant;
cin>>ins;
int ants[ant];
int inss[ins];
 int sumins=0;
  int sumant=0;
for (int flaa=0;flaa<ant;flaa++){
        cin>>ants[flaa];
        } 
for (int flan=0;flan<ins;flan++){
        cin>>inss[flan];
        }
        
   if(ant>ins){
   
        for(int aa=0;aa<ant;aa++){
        	sumant+=ants[aa];
        }
        	for(int cc=0;cc<ins;cc++){
        		sumins+=inss[cc];
        		}
        if(sumant>sumins){
        cout<<"Yes";
        }
           else{
        	cout<<"No";
        }
   }
        else{
        	cout<<"No";
        }
   }
        	                