#include <iostream>

using namespace std;

int main(){
  string var = "DIIFD";
  int i = 0;
  int j = 4;
  int output = 0;
  while (i<j){
    // cout<<i<<endl;
    // cout<<j<<endl;
    if (var[i] != var[j]){
      output = output + 1;
      i = 1;
      j = 0;
    }
  i++;
  j--;
  }
  if (output == 0){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}
