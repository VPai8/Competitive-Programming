#include<iostream>
#include<string>
#include<unordered_map>
#include<utility>
using namespace std;
int main(){
	unordered_map<char,int> m1;
	int n,m,i,j,x,y,l;
	string s;
	cin>>n>>m>>s;
	for(i=0;i<m;++i){
		cin>>x>>y>>l;
		string s1=s.substr(x-1,l);
		string s2=s.substr(y-1,l);
        for(j=0;j<l;++j)
        	m1.insert(make_pair(s1[j],1));
        int l=m1.size();
        m1.clear();
        for(j=0;j<l;++j)
        	m1.insert(make_pair(s2[j],1));
        if(l==m1.size())
        	cout<<"YES";
        else
        	cout<<"NO";
        cout<<"\n";
        m1.clear();
    }
	
	return 0;
}