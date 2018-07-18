#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    long n,i,re;
    long long sum=0;
    cin>>n;
    vector<long> cap;
    for(i=0;i<n;++i)
     {cin>>re;sum+=re;}
    for(i=0;i<n;++i)
     {cin>>re;cap.push_back(re);}
    sort(cap.begin(),cap.end());
    if(cap[n-1]+cap[n-2]>=sum)
     cout<<"YES";
    else
     cout<<"NO";
 return 0;
}