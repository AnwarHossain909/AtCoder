#include <algorithm>
#include <iostream>
#include <string>
using namespace std;int main(){string s;cin>>s;reverse(s.begin(),s.end());string words[]={"maerd","remaerd","esare","resare"};int i=0;while(i<(int)s.size()){bool ok=false;for(auto&w:words)if(s.substr(i,w.size())==w){i+=w.size();ok=true;break;}if(!ok){cout<<"NO\n";return 0;}}cout<<"YES\n";}
