#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  int x11,x12,x13;
  int x21,x22,x23;
  int x31,x32,x33;
  cin>>x11>>x12>>x13;
  cin>>x21>>x22>>x23;
  cin>>x31>>x32>>x33;
  cout<<((x11+x12+x21)%2 == 0 ? "1":"0")<<((x11+x12+x13+x22)%2 == 0 ? "1":"0")<<((x12+x13+x23)%2 == 0 ? "1":"0")<<endl;
  cout<<((x11+x21+x22+x31)%2 == 0 ? "1":"0")<<((x21+x22+x23+x32+x12)%2 == 0 ? "1":"0")<<((x13+x23+x33+x22)%2 == 0 ? "1":"0")<<endl;
  cout<<((x31+x32+x21)%2 == 0 ? "1":"0")<<((x31+x22+x33+x32)%2 == 0 ? "1":"0")<<((x32+x33+x23)%2 == 0 ? "1":"0")<<endl;  

}