#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int fir,sec,i,ar[n+1],alive=0;
	for(i=1;i<=n;++i)
		cin>>ar[i];
    for(sec=n,fir=n+1;fir>1;--sec){
    	if(fir==sec+1)
    		++alive;
    	if((sec-ar[sec])<fir)
    		fir=sec-ar[sec];
    }
    cout<<alive;
	return 0;
}