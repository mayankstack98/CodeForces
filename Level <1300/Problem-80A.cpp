#include <iostream>
#include <cctype>
using namespace std;
bool isprime(int n){
      for(int i=2 ; (i*i) <= n ; i++){
        if(n%i==0){
            return false;
        }
        else {
        }
    }
   return true;
}


int main() {
int n1,n2;
cin>>n1>>n2;
int sol;
for(int i = n1+1; i <= n2;i++){
  if(isprime(i)){
    sol = i;
    break;
  }
}
if(sol == n2){
  cout<<"YES";
}
else{
  cout<<"NO";
}
}