#include<iostream>
using namespace std;
int main(){
	int n,i,c,sum;
	cin>>n;
	string s;
	cin>>s;
	for(i=0,c=0,sum=0;i<n;++i){
		if(s[i]=='x')
			++c;
		else{
        if(c>2)
        	sum+=(c-2);
        c=0;
        }
	}
	if(c>2)
      sum+=(c-2);
	cout<<sum;
	return 0;
		
}