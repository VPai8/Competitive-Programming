#include<iostream>
using namespace std;
int main(){
	int n,x,i,j,val;
	cin>>n>>x;
	int ar[n];
	for(i=0;i<n;++i){
		cin>>ar[i];
	}
	long c=0;
	for(i=0;i<n;++i){
		val=ar[i]^x;
		for(j=i+1;j<n;++j)
			if(val==ar[j])
				++c;
	}
	cout<<c;
	return 0;
}
