#include<bits/stdc++.h>
using namespace std;
int smaxm(int *arr,int n){
  int maxi=INT_MIN;
  int smaxi=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>maxi){
      smaxi=maxi;
      maxi=arr[i];
    }
    else if(arr[i]>smaxi && arr[i]<maxi){
      smaxi=arr[i];
    }
  }
  return smaxi;
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Second Maxm element in Array is: "<<smaxm(arr,n);
}

