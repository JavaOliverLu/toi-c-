//向恕哥敬禮
#include<iostream>
using namespace std;

int main()
{
int lions;
cin>>lions;
int num=0;
int money=0;
int bk[lions][2];
int tmp;

 
for (int flaa=0;flaa<lions;flaa++){
        cin>>bk[flaa][0];
        cin>>bk[flaa][1];
        }

for (int fla=0;fla<lions;fla++){
       if(bk[fla][1]>100){
           num++;
           money+=((bk[fla][1])-100)*5;
        }
    }

int ls[num];   
int g=0;

for(int aa=0;aa<lions;aa++){
    if(bk[aa][1]>100){
         ls[g]=bk[aa][0];
         g++;
      }
        }

        for(int i=0 ; i<num ; i=i+1 )
    {
        for( int j=i+1 ; j<num ; j=j+1 )
        {
            if( ls[i] > ls[j] )
            {
                
                tmp = ls[i];
                ls[i] = ls[j];
                ls[j] = tmp;
            }
        }
    }

if(money==0){
   cout<<"0";
    }
else{    
   for(int ata=0;ata<num;ata++){
      cout<<ls[ata]<<" ";
        }
        cout<<'\n'<<money;
    }

}
//來喔 有金幣巧克力
