#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
int r,c;
int arr[5][5];
for(int i=0;i<5;i++){
  for(int j=0;j<5;j++){
    cin>>arr[i][j];
    if(arr[i][j] == 1){
      r=i+1;
      c= j+1;
    }
  }
}
r= abs(3-r);
c = abs(3-c);
cout<<r+c;
}