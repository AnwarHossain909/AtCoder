#include <cstdlib>
#include <iostream>
using namespace std;int main(){int n,t=0,x=0,y=0;cin>>n;while(n--){int nt,nx,ny;cin>>nt>>nx>>ny;int distance=abs(nx-x)+abs(ny-y),time=nt-t;if(distance>time||(time-distance)%2){cout<<"No\n";return 0;}t=nt;x=nx;y=ny;}cout<<"Yes\n";}
