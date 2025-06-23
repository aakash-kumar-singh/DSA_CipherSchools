#include<iostream>
using namespace std;
bool findX(int *arr,int n,int x){
  for(int i=0;i<n;i++){
    if(arr[i]==x){
      return true;
    }
  }
  return false;
}
int main(){
  int arr[5]={1,2,3,6,5};
  int x=5;
  cout<<findX(arr,5,x);
}