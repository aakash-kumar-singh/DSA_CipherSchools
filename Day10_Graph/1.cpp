#include<bits/stdc++.h>
using namespace std;
class graph{
  public:
  unordered_map<int,list<int>> adj;
  void addEdge(int u,int v,bool directiorn){
    adj[u].push_back(v);
    if(directiorn==0){
      adj[v].push_back(u);
    }
  }
  void printGraph(){
    for(auto i:adj){
      cout<<i.first<<"->";
      for(auto j:i.second){
        cout<<j<<",";
      }
      cout<<endl;
    }
  }
};
int main(){

}