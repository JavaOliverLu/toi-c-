#include<iostream>

using namespace std;

int main()
{
int numchi,eag,trn;
cin>>numchi;
int chi[numchi];
for (int flaa=0;flaa<numchi;flaa++){
        cin>>chi[flaa];
        }
        cin>>eag;
        cin>>trn;
       
        int caug[trn];
        for (int flan=0;flan<trn;flan++){
        cin>>caug[flan];
        }
        int eagg=eag;
        int resto;
        for(int aa=0;aa<trn;aa++){
        	for(int cc=0;cc<numchi;cc++){
        		if(caug[aa]==chi[cc]){
        			resto=chi[cc];
        			chi[cc]=eagg;
        			eagg=resto;
        			break;
        		}
        	}
        }
        for(int lm=0;lm<numchi;lm++){
        cout<<chi[lm]<<" ";
        }
        }
