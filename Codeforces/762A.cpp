#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<long long> vec;
	long long n,k,i=1;
	cin>>n>>k;
	while(i*i<=n){
     if(!(n%i)){
     	vec.push_back(i);
     if(i*i!=n)
     	vec.push_back(n/i);
    }
    ++i;
	}
	sort(vec.begin(),vec.end());
	if(vec.size()<k)
		cout<<"-1";
	else
		cout<<vec[k-1];
	return 0;
}