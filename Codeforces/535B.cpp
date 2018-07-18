#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    string n;
    cin>>n;
	long int i,len=n.length();
	for(i=0;i<len;++i)
		if(n[i]=='4')
			n[i]='0';
		else
			n[i]='1';
			
	unsigned long long x= strtoull(&n[0],NULL,2);
    
    unsigned long long sum= 2*(pow(2,len-1)-1);
    sum+=x;
    ++sum;
    cout<<sum;
	return 0;
}