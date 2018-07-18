#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m,i;
	cin>>n>>m;
	long long dorm[n],x;
	cin>>dorm[0];
	for(i=1;i<n;++i){
		cin>>x;
        dorm[i]=dorm[i-1]+x;
	}
	for(i=0;i<m;++i){
		cin>>x;
		auto it=lower_bound(dorm,dorm+n,x);
		cout<<distance(dorm,it)+1<<" ";
		if(distance(dorm,it)==0)
		 cout<<x<<"\n";
		else{
		it--;
		cout<<x-(*it)<<"\n";
		}
	}
	return 0;
}