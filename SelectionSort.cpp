#include<iostream>
using namespace std;
void selection_sort(int a[],int n);
int main()
{
    int arr[4]={7,4,5,2};
    for(int i=0;i<4;i++) cout<<arr[i]<<" ";
    cout<<endl;
    selection_sort(arr,4);
    cout<<"After Selection Sort"<<endl;
    for(int i=0;i<4;i++) cout<<arr[i]<<" ";
    return 0;
}

void selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        int t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
}
