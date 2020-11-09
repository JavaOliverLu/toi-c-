#include<iostream>
using namespace std;
int main(){
int a,c,b,d;
cin>>a;
cin>>b;
d=b*8;
c=a;
if(d>c*3){
cout<<"too much";
}
else if(d<c*2){
cout<<"not enough";
}
else if(c*3>=d&&d>=c*2){
cout<<"yes";
}


return 0;
}

