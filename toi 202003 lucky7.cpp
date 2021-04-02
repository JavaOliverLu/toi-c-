#include<iostream>
using namespace std;
int main(){
int num[11]{};
int ans[11]{};
int d=0;
int qq=-1;
int qqq=-1;
int pt;
bool lab=false;

for (int flaa=0;flaa<11;flaa++){
        cin>>num[flaa];
        if(num[flaa]==0){
       pt =flaa;
        break;
}
        }
      // cout<<pt;
for (int flan=0;flan<pt;flan++){  

  if(num[flan]%7==0){
ans[flan]=((num[flan]%70)+1000000);

        }
       
    else if(num[flan]%7!=0){
    ans[flan]=(num[flan]%77)-1000000;
   
}

}

for(int aakw=0;aakw<pt;aakw++){
//cout<<ans[aakw];
 if(num[aakw]%7==0){   
lab=true;     
  }
}
   
   
if(lab==true){
for(int aa=pt-1;aa>=0;aa--){
      if(ans[aa]>=d){
d=ans[aa];
qq=aa;
        }
    }
     cout<<num[qq];
 }
 
else if(lab==false){
for(int aas=pt-1;aas>=0;aas--){
     
 if(ans[aas]<=d){
d=ans[aas];
qqq=aas;
}
   
}
   cout<<num[qqq];
   }
     
       

return 0;
}
