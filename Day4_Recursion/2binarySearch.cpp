#include<iostream>
using namespace std;

bool binarySearch(int *arr,int s,int e,int key){
  if(s>e) return false;
  int mid=(s+e)/2;
  if(arr[mid]==key) return true;
  if(arr[mid]<key){
    return binarySearch(arr,mid+1,e,key);
  }
  else{
    return binarySearch(arr,s,mid-1,key);
  }
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int key;
  cin>>key;
  if(binarySearch(arr,0,n-1,key)){
    cout<<"present";
  }
  else{
    cout<<"not present";
  }
}