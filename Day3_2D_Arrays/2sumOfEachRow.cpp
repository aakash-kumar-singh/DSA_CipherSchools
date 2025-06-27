#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int m,n;
  cin>>m>>n;
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  int maxm=0;
  for(int i=0;i<m;i++){
    int sum=0;
    for(int j=0;j<n;j++){
      sum+=arr[i][j];
    }
    maxm=max(maxm,sum);
    cout<<sum<<" ";
  }
  cout<<endl<<maxm;
  
}