#include <iostream>
#include <cstdlib>
using namespace std;
long int cost(int x, int y,int a, int b){
  long int cost=0;
  long int x_absolute = abs(x);
  long int y_absolute = abs(y);
  if(x==0 && y==0){
    cost=0;
    return cost;
  }
  if(x == 0 && y!=0){
    cost = a*y_absolute;
    return cost;
  }
  if(y==0 && x!=0){
    cost = a*x_absolute;
    return cost;
  }
  if (x!=0 && y!=0){
    long int diff = x_absolute-y_absolute;
    if(diff > 0){
      cost = (b*y_absolute )+ (diff*a);
      return cost;
    }
    if(diff < 0){
      cost = (b*x_absolute )+ (abs(diff)*a);
      return cost;
    }    
  }

return cost;
}
int main() {

int test;
cin>>test;
while(test!=0){
  long int x,y;
  long int a,b;
  cin>>x>>y;
  cin>>a>>b;
  long int sol = cost(x,y,a,b);
  cout<<sol<<endl;  
  test--;
}
}