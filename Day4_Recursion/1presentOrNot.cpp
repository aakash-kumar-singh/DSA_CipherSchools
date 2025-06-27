#include<iostream>
using namespace std;
bool isPresent(int* arr,int n,int key,int idx=0){
  if(idx==n) return false;
  if(arr[idx]==key) return true;
  return isPresent(arr,n,key,idx+1);
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int x;
  cin>>x;
  if(isPresent(arr,n,x)){
    cout<<"Element Found";
  }
  else{
    cout<<"Element Not found";
  }
}