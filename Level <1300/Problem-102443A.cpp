#include <iostream>
#include <cctype>
using namespace std;

int main(){
  int A[100000];
  int n;
  cin>>n;
  long long sum=0;
  for(int i=0;i<n;i++){
    cin>>A[i];
    if(A[i]%2 == 0){
      A[i] = A[i]-1;
    }
    sum = sum+A[i];
  }
  int min=A[0];
  for(int i=1;i<n;i++){
    if(A[i]<min){
      min=A[i];
    }
  }
  if(n%2==0){
    cout<<sum-min;
  }
  else{
    cout<<sum;
  }
  
}