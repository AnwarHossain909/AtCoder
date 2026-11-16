#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;int main(){int n;cin>>n;vector<int>a(n);for(int&i:a)cin>>i;sort(a.rbegin(),a.rend());int diff=0;for(int i=0;i<n;++i)diff+=(i%2? -a[i]:a[i]);cout<<diff<<'\n';}
