#include<iostream>
using namespace std;
int main(){
	int n; 
	cin>>n;
	int ar[n],f[n],i,j,k;
	for(i=0;i<n;++i)
		cin>>ar[i];
	f[n-1]=ar[n-1];
	for(i=n-2,k=n-2;i>=0;--i){
		for(j=n-1;(j>k)&&(f[j]!=ar[i]);--j);
		if(j==k){
			f[j]=ar[i];
			--k;
		}
	}
	cout<<n-1-k<<"\n";
	for(i=k+1;i<n;++i)
		cout<<f[i]<<" ";
	return 0;
}