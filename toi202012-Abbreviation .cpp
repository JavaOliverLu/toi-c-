#include<iostream>
#include<string.h>
#include<stdio.h> 
#include<ctype.h> 
using namespace std;

int main(){
	char arr[1000000];
	char ans[1000000];
fgets (arr,1000000,stdin);

	
			if((arr[0]=='T'||arr[0]=='t')&&(arr[1]=='O'||arr[1]=='o')&&(arr[2]==0x20||arr[2]=='\n')){
    				ans[0]='2';}
    			
    			else	if((arr[0]=='F'||arr[0]=='f')&&(arr[1]=='O'||arr[1]=='o')&&(arr[2]=='R'||arr[2]=='r')&&(arr[3]==0x20||arr[3]=='\n')){
    				ans[0]='4';}
    				
    			else	if((arr[0]=='Y'||arr[0]=='y')&&(arr[1]=='O'||arr[1]=='o')&&(arr[2]=='U'||arr[2]=='u')&&(arr[3]==0x20||arr[3]=='\n')){
    				ans[0]='u';}
    				
    			else	if((arr[0]=='A'||arr[0]=='a')&&(arr[1]=='N'||arr[1]=='n')&&(arr[2]=='D'||arr[2]=='d')&&(arr[3]==0x20||arr[3]=='\n')){
    				ans[0]='n';}
    	
    				else if(islower(arr[0])){
    				        ans[0]=toupper(arr[0]);
    				       }	
                else{	
    		ans[0]=arr[0];
    			}
	
	int ind=1;
    
    //||arr[2]=='\n')
    //&&(arr[3]==0x20||arr[3]=='\n')
    
   	for(int a=0;a<100000;a+=1){
   				
    		if(arr[a-1]==0x20){
    			if((arr[a]=='T'||arr[a]=='t')&&(arr[a+1]=='O'||arr[a+1]=='o')&&(arr[a+2]==0x20||arr[a+2]=='\n')){
    				ans[ind]='2';}
    			
    			else	if((arr[a]=='F'||arr[a]=='f')&&(arr[a+1]=='O'||arr[a+1]=='o')&&(arr[a+2]=='R'||arr[a+2]=='r')&&(arr[a+3]==0x20||arr[a+3]=='\n')){
    				ans[ind]='4';}
    				
    			else	if((arr[a]=='Y'||arr[a]=='y')&&(arr[a+1]=='O'||arr[a+1]=='o')&&(arr[a+2]=='U'||arr[a+2]=='u')&&(arr[a+3]==0x20||arr[a+3]=='\n')){
    				ans[ind]='u';}
    				
    			else	if((arr[a]=='A'||arr[a]=='a')&&(arr[a+1]=='N'||arr[a+1]=='n')&&(arr[a+2]=='D'||arr[a+2]=='d')&&(arr[a+3]==0x20||arr[a+3]=='\n')){
    				ans[ind]='n';}
    	
    				else if(islower(arr[a])){
    				        ans[ind]=toupper(arr[a]);
    				        }	
                else{	
    		ans[ind]=arr[a];
    			}
    			ind+=1;
  				  }
   		 }
   		 int d=strlen(ans);
	
	

   	for(int j=0;j<d;j+=1){
   			cout<<ans[j];
 		  }
   	}
