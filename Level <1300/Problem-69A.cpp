#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
int arr[n][3];
for(int i=0;i<n;i++){
  for(int j=0;j<3;j++){
    cin>>arr[i][j];
  }
}
int sum =0;
for(int i=0;i<n;i++){
  sum = sum+arr[i][0];
}
if(sum == 0){
  for(int i=0;i<n;i++){
  sum = sum+arr[i][1];
  }
  if(sum == 0){
      for(int i=0;i<n;i++){
      sum = sum+arr[i][2];
      }
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}
else{
  cout<<"NO";
 }

}