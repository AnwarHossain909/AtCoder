#include <iostream>
#include <vector>
using namespace std;int main(){int n,answer=1e9;cin>>n;while(n--){int x,count=0;cin>>x;while(x%2==0)x/=2,++count;answer=min(answer,count);}cout<<answer<<'\n';}
