#include<iostream>
 #include<ctype.h> 
 #include <string.h>
using namespace std;

int main(){
    int cnt=0;
    int a,b,c,d,e,f,g,h,i,j,zz,mm;
	cin>>zz>>mm;
	
	cin>>a>>b>>c;
	cin>>d>>e>>f;
	cin>>g>>h>>i;

		
   		//a&&
	 if(a!=b&&a!=d&&a!=e){
   		cnt++;}
//b
	 	 if(a!=b&&b!=d&&b!=e&&b!=f&&b!=c){
   		cnt++;}
   	//c
   		 	 if(c!=e&&c!=f&&b!=c){
   		cnt++;}
   	//d
   		 	 if(a!=d&&b!=d&&d!=e&&d!=g&&d!=h){
   		cnt++;}
   		//e
   		 if(a!=e&&e!=d&&b!=e&&e!=f&&e!=c&&e!=g&&e!=h&&e!=i){
   		cnt++;}
   		
   		//f
   		  if(f!=b&&f!=c&&f!=e&&f!=h&&f!=i){
   		cnt++;}
   		//g
   		 if(g!=d&&g!=e&&g!=h){
   		cnt++;}
   		//h
   		 if(g!=h&&h!=e&&d!=h&&f!=h&&i!=h){
   		cnt++;}
   		//i
   		 if(i!=e&&i!=h&&f!=i){
   		cnt++;}
   		
   		
   		cout<<cnt;
}
