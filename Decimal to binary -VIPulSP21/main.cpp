#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int num,ans,count;
  cin>>num;
  count=0;
  ans=0;
  while(num>0){
    ans=ans+((num%2)*pow(10,count++));
    num=num/2;
  }
  cout<<ans<<endl;
}
