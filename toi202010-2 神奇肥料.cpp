#include <iostream>
using namespace std;
int main()
{
	int h,eh,aa;
	int d=1;
    cin>>h>>eh>>aa;
    int kk=h;
    int hrt=aa;
    int eha=eh;
 
        while(kk<eh&& kk!=eha)
    {
        
        
        
        	 	  d+=1;
        if((d%10!=1&&d%10!=0&&d%3!=1)||d==1){
        kk=kk+kk/10;}
        else if(d%10!=1&&d%10!=0&&d%3==1){
        	kk=kk+kk/3;
        	
     }
    
        }
    
    int j=d;
        if(hrt*10<d){
    	cout<<"unsalable";
    }
  
    else{
    cout<<j;
    }
   
    
return 0;
    }

