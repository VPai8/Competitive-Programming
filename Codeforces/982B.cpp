#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
	int n,i,ele;
	cin>>n;
	map<int,int> w;
	for(i=0;i<n;++i){
		cin>>ele;
		w.insert(make_pair(ele,i+1));
	}
	string s;
	cin>>s;
	auto it1=w.begin();
	auto it2=it1;
	for(i=0;i<2*n;++i){
		if(s[i]=='0'){
			cout<<it1->second<<" ";
            it2=it1;
			it1++;
		}
		else{
		    while(it2->second==0)
		     it2--;
		    cout<<it2->second<<" ";
			it2->second=0;
			it2--;
		}
	}

	return 0;

}