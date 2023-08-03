#include <iostream>

using namespace std;

int main(){
  int num1,num2,num3;
  cin>>num1;
  cin>>num2;
  cin>>num3;
  if (num1<0 || num2<0 || num3<0){
    cout<<"NO"<<endl;
  }
  else if ((num1*num1)+(num2*num2)==num3*num3){
    cout<<"YES"<<endl;
  }
  else if ((num1*num1)+(num3*num3)==num2*num2){
    cout<<"YES"<<endl;
  }
  else if ((num3*num3)+(num2*num2)==num1*num1){
    cout<<"YES"<<endl;  
  }
  else if{
    cout<<"NO"<<endl;
  }
}
