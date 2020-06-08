#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
  string s;
  cin>>s;
  int n = s.length();
  for(int i=0; i<n ;i++){
    if(s[i] == '.'){
      cout<<"0";
    }
    if(s[i] == '-' && s[i+1] == '-'){
      cout<<"2";
      i = i+1;
      continue;
    }
    if(s[i] == '-' && s[i+1] == '.'){
      cout<<"1";
      i++;
      continue;
    }

  }
}