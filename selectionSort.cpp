#include<iostream>
using namespace std;

void swap(int &x , int &y)
{
    int temp =x;
    x=y;
    y=temp;
}

void sort(int a[], int n){
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(a[j]<a[k])
            {
                k=j;
            }
        }
        swap(a[i],a[k]);
    }
}

int main(){
    int arr[]={7,5,8,6,8,1,3,4,2,0};
    int n=10;

    sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }

    return 0;
}