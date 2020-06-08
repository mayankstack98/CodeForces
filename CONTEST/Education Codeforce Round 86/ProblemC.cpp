#include <iostream>
using namespace std;
int modulo(int a,int b, int l,int r){
  int count=0;
  for(int i = l; i <= r; i++){
    if(((i%a)%b) != ((i%b)%a)){
      count++;
    }
  }
  return count;

}
int main() {
  int test;
  int a,b,q,l,r;
  cin>>test;
  while(test!=0){
    cin>>a>>b>>q;
    while(q!=0){
      cin>>l>>r;
      int sol = modulo(a,b,l,r);
      cout<<sol<<" ";
      q--;
    }
    cout<<endl;

  test--;
  }

}