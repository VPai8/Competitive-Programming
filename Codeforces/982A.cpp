#include<iostream>
using namespace std;
int main(){
	int n,ch=0,c=0,i,j;
	cin>>n;
	string s;
	cin>>s;
	for(i=0;(s[i]!='1')&&(i<n);++i);
	for(j=n-1;(s[j]!='1')&&(j>=0);--j);
	//cout<<i<<" "<<j<<"\n";
	if((n==1)&&(s[0]=='0'))
	cout<<"No";
	else{
	   if(i<2&&j>n-3){
		for(i++;i<=j;++i){
			if(s[i]=='1'){
             if(c==0||c>2)
             	{ch=1;break;}
             else
             	c=0;
		    }
		    else
		    	++c;
		}
	}
	else
		ch=1;
	if(ch)
		cout<<"No";
	else
		cout<<"Yes";
	}return 0;
}