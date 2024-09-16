#include <iostream>

using namespace std;

void explainPair(){
    pair<int,int> p = {1,2};
  cout<<p.first<<" "<<p.second<<endl;
  pair<int,pair<int,int>> pair = {1,{3,5}};
  cout<<pair.first<<" "<<pair.second.first<<" "<<pair.second.second<<endl;
}

int main() {
   explainPair();
    return 0;
}

