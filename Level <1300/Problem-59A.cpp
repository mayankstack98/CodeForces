#include <iostream>
#include <cctype>
using namespace std;
int main() {
  string s;
  cin>>s;
  int l;
  int cu=0;
  int cl=0;
  l= s.size();
  for(int i=0;i<l;i++){
    if(isupper(s[i])){
      cu++;
    }
    else{
      cl++;
    }
  }
  if (cu>cl){
    for(int i=0;i<l;i++){
      if(islower(s[i])){
        s[i] = toupper(s[i]);
      }
    }
  }
  else{
    for(int i=0;i<l;i++){
      if(isupper(s[i])){
        s[i] = tolower(s[i]);
      }
    }

  }
  cout<<s;
}