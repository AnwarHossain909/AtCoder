#include <iostream>
using namespace std;int main(){int n,a,b,answer=0;cin>>n>>a>>b;for(int x=1;x<=n;++x){int sum=0,y=x;while(y)sum+=y%10,y/=10;if(a<=sum&&sum<=b)answer+=x;}cout<<answer<<'\n';}
