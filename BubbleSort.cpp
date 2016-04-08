#include<iostream>
using namespace std;
void bubble_sort(int a[],int n);
int main()
{
    int arr[4]={7,4,5,2};
    for(int i=0;i<4;i++) cout<<arr[i]<<" ";
    cout<<endl;
    bubble_sort(arr,4);
    cout<<"After Bubble Sort"<<endl;
    for(int i=0;i<4;i++) cout<<arr[i]<<" ";
    return 0;
}

void bubble_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;

            }
        }
    }

}
