#include <iostream>
 #include <string>
 #include <cstdlib>
 using namespace std; 
 int main() {     
 string str;     int tm;     cin>>tm ;     cin>>str;      
 if(tm==1){
	if(str[0]>str[1]&&str[0]>str[2]){
		cout<<"3 "<<str[0];
	}
	
	else if(str[2]>str[1]&&str[2]>str[0]){
		cout<<"1 "<<str[2];
	}
	else if(str[1]>str[2]&&str[1]>str[0]){
		cout<<"2 "<<str[1];
	}
 } 
 else if(tm==2){
 if(str[5]+str[4]>str[3]+str[2]&&str[5]+str[4]>str[1]+str[0]){
		cout<<"1 "<<str[5]+str[4];
	}
	
	else if(str[3]+str[2]>str[5]+str[4]&&str[3]+str[2]>str[1]+str[0]){
		cout<<"2 "<<str[3]+str[2];
	}
	else if( str[1]+str[0]>str[5]+str[4]&& str[1]+str[0]>str[3]+str[2]){
		cout<<"3 "<< str[1]+str[0];
	}
 }
 
 /*int tm1=tm; int pki[tm]={};
   int len=int(str.size());
   int flg=len-1;  
   int ans=0;
     while(tm1>0){
     for(int li=tm;li>0;w-=1){
     	pki[ans]+=str[flg+li]   	
	 }
	 
	 tm1-=1;    	
	 flg-=tm;
	 ans+=1
	 }
	 cout<<*/
}




