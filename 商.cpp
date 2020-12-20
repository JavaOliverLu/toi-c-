#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
int num;
int a,b,c,d,e,f,g,h,i,l,m,n;
int x,y,z;
int w1,w2,w3,w4,w5;
cin>>num;




cin>>d>>x>>y>>z>>e;

 
cin>>f>>g>>h>>i>>l;

a=x;
b=y;
c=z;


if(b>c&&c>a){
printf ( "%d %d %d %d %d" , f, h, g, i, l);    
}
else if(b>a&&a>c){
     printf ( "%d %d %d %d %d" , f, g, i, h, l);    
}
else if(a>b&&b>c){
   printf ( "%d %d %d %d %d" , f, i, h, g, l);    
}
else if(a>c&&c>b){
printf ( "%d %d %d %d %d" , f, h, g, i, l);    
}

else if(c>a&&a>b){
     printf ( "%d %d %d %d %d" , f, g, i, h, l);    
}
else if(c>b&&b>a){
   printf ( "%d %d %d %d %d" , f, i, h, g, l);    
}
else
{
    printf ( "%d %d %d %d %d" , f, g, h, i, l);    
}
return 0;
}
