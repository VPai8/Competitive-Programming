#include<iostream>
#include<map>
//#include<pai>
using namespace std;
int main(){
   int n,x,i;
   cin>>n>>x;
   int ar[n],val;
   long sum=0;
   map<int,int> m;
   for(i=0;i<n;++i){
    cin>>val;
    ar[i]=val;
    if(m.find(val)!=m.end())
    	++m[val];
    else
    	m.insert(make_pair(val,1));
    }
  /* for(auto it=m.begin();it!=m.end();it++)
    cout<<it->first<<" "<<it->second<<"\n";*/
   for(i=0;i<n;++i){
    long v=ar[i]^x;
    //cout<<v<<" ";
    auto it=m.find(v);
    if(it!=m.end()){
    	if(v==ar[i])
    		sum+=(2*((it->second)-1));
    	else
    		sum+=(it->second);
    }
   }
   cout<<sum/2;
	return 0;
}