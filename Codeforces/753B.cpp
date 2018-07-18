#include<iostream>
using namespace std;
int main(){
	string s;
	int buff=4,i,j,ar[4],ans[4],n;
	for(i=0,j=0;i<=9999&&j!=3;i+=1111){
      cout<<i;
      fflush(stdout);
      cin>>s;
      if(s[0]!='0')
      	{ar[j]=i%10;++j;}
      else
      	{buff=i%10;}
	}
	for(i=0;i<4;++i){
		n=buff*1000+buff*100+buff*10+ar[i];
		for(j=0;j<4;++j){
		 cout<<n;
		 fflush(stdout);
		 cin>>s;
		 if(s[0]!='0'){
          ans[3-j]=ar[i];
		  break;
		 }
		}
	}
	cout<<ans;
	fflush(stdout);
	cin>>s;

	return 0;
}