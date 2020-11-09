#include<iostream>

using namespace std;

int main(){

int str;     int tm;     cin>>tm ;     cin>>str;      
int a, b, c, d, e, f, g, h, i,ck;
int t=str;
 
	a = t % 10;
	b = t / 10  % 10;
	c = t / 100 % 10;
	d = t / 1000 % 10;
	e = t / 10000 % 10;
	f = t / 100000 % 10;
	ck= t / 1000000 % 10;
    g=a+b;
    h=c+d;
    i=e+f;
 
  
    if(tm==1&&d==0){
	if(c>=b&&c>=a){
		cout<<"3 "<<c;	
	}
    	 else if(b>=a&&b>=c){
		cout<<"2 "<<b;
	}
	
		  else if(a>=c&&a>=b){
		cout<<"1 "<<a;
		
	}

 }
 	else if(tm==2&&ck==0){
 	 if(i>=g&&i>=h){
		cout<<"3 "<<i;
 	 }
 		
		else if( h>=g&& h>=i){
		cout<<"2  "<< h;
	}
	
		else
		if(g>=h&&g>=i){
		cout<<"1  "<<g;
	}

 }
}

