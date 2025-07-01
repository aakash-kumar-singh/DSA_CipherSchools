#include<iostream>
using namespace std;
int partition(int *arr,int s,int e){
  int pivot=arr[s];
  int count=0;
  for(int i=s+1;i<=e;i++){
    if(arr[i]<=pivot) count++;
  }
  int pivotIdx=s+count;
  swap(arr[pivotIdx],arr[s]);
  int i=s;
  int j=e;
  while (i<pivotIdx && j>pivotIdx)
  {
    while (arr[i]<pivot)
    {
      i++;
    }
    while (arr[j]>pivot)
    {
      j--;
    }
    swap(arr[i+1],arr[j--]);
    
    
  }
  return pivotIdx;
  
}
void quickSort(int *arr,int s,int e){
  if(s>=e) return;
  int p=partition(arr,s,e);
  quickSort(arr,s,p-1);
  quickSort(arr,p+1,e)
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
}