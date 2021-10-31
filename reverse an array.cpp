#include<iostream>
using namespace std;
int rev(int* arr, int size){
for (int i=size-1;i>=0;i--)
    cout<<arr[i]<<" ";
}
int main(){
int arr1[5]={10,20,30,40,50};
rev(arr1,5);
return 0;
}
