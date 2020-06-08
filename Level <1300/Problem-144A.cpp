#include <iostream>
#include <cctype>
using namespace std;

int main(){
  int a[101];
  int n;
  cin>>n;
  int minidx,maxidx;
  for(int i=1;i <= n;i++){
    cin>>a[i];
  }
  int temp;
  temp=a[1];
  for(int i=1;i<=n;i++){
    if(a[i] <= temp){
      temp = a[i];
      minidx=i;
    }
  }
  temp=a[1];
  for(int i=1;i<=n;i++){
    if(a[i]>temp){
      temp = a[i];
      maxidx=i;
    }
  }
  int sol = ((n-minidx)+(maxidx-1));
  if(minidx>maxidx){
    if(sol == -1){
      cout<<0;
    }
    else{
      cout<<sol;
    }
  }
  else{
    if(sol == -1){
      cout<<0;
    }
    else{
      cout<<sol-1;
    }
  }
  
}