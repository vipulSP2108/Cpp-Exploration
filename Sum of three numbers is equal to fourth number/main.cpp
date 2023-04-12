#include <iostream>

using namespace std;

int main(){
  int num1,num2,num3,num4;
  cin>>num1;
  cin>>num2;
  cin>>num3;
  cin>>num4;
  if (num1+num2+num3==num4){
    cout<<"YES";
  }
  else if (num4+num2+num3==num1){
    cout<<"YES";
  }
  else if (num1+num4+num3==num2){
    cout<<"YES";
  }
  else if (num1+num2+num4==num3){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}
