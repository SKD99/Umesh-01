#include<iostream>
using namespace std;
int main(){
int a,b,c,p,q,r;
cout<<"Enter the first 3 bit binary number\n";
cin>>a>>b>>c;
p=a;
q=a^b;
r=b^c;
cout<<"Gray code\n"<<p<<q<<r<<endl;;
return 0;
}
