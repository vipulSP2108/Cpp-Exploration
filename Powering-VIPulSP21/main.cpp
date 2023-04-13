#include <iostream>
using namespace std;

int main(){
  int A,B,square;
  cin>>A;
  cin>>B;
  square=1;
  int count = 1; 
  while(count<=B){
    square = square*A;
    count++;
  }
  cout<<square;
}
