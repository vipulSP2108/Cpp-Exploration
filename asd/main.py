#include <iostream>

using namespace std;

int main(){
  string user1,user2;
  int u1count=0;
  int u2count=0;
  cout<<"Welcome to Stone Paper Siccor Game\n give input in form of siccor, paper, stone"<<endl<<endl;
  while(true){
    cout<<"User1 ";
    cin>>user1;
    cout<<"User2 ";
    cin>>user2;
    if (user1=="end" || user2=="end"){
      cout<<"\nThank You"<<endl;
      if(u1count>u2count){
        cout<<"User1 wins"<<endl;
      }
      else if(u1count<u2count){
        cout<<"User2 wins"<<endl;
      }
      else{
        cout<<"Draw"<<endl;
      }
      cout<<"Score\nUser1 "<<u1count<<" User2 "<<u2count<<endl;
      break;
    }
    else if (user1=="paper" && user2=="stone"){
      u1count++;
      cout<<"User1 wins"<<endl<<endl;
    }
    else if (user1=="siccor" && user2=="paper"){
      u1count++;
      cout<<"User1 wins"<<endl<<endl;
    }
    else if (user1=="stone" && user2=="siccor"){
      u1count++;
      cout<<"User1 wins"<<endl<<endl;
    }
    else if (user1=="paper" && user2=="siccor"){
      u2count++;
      cout<<"User2 wins"<<endl<<endl;
    }
    else if (user1=="stone" && user2=="paper"){
      u2count++;
      cout<<"User2 wins"<<endl<<endl;
    }
    else if (user1=="siccor" && user2=="stone"){
      u2count++;
      cout<<"User2 wins"<<endl<<endl;
    }
    else { 
      cout<<"Draw"<<endl<<endl;
    }
  }
}
