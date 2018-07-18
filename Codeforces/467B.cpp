#include<iostream>
using namespace std;

int ones(int x){
 int c=0;
 while(x){
	if(x%2)
		++c;
	x/=2;
 }
 return c;
}

int main(){
 int n,m,k,i;
 cin>>n>>m>>k;
 int ar[m+1];
 for(i=0;i<m+1;++i)
 	cin>>ar[i];
 int y=ar[m],c=0,k1,x;
 for(i=0;i<m;++i){
 	x=ar[i]^y;
    k1=ones(x);
    if(k1<=k)
    	++c;
 }
 cout<<c;
 return 0;
}