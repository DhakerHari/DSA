#include<iostream>
using namespace std;
int main()
{
    // int A[5];
    // int* p;
    // p = new int(5);
    // A[0]=4;
    // p[0]=8;
    // cout<<A[];
    // cout<<"\n"<<p[];


// increasing the size of an array

    // int a[5]={2,3,4,6,8};
    // int i;

    // int b[10];

    // for(i=0;i<=4;i++){
    //     b[i]=a[i];
    // }
    //  for(int j=0;j<=9;j++){
    //    cout<<" "<<b[j];
    // }
    
    // int *p,*q,i;
    // p = new int(5);
    // q= new int(10);
    
    // for(i=0;i<5;i++){
    //     cin>>p[i];
    // }

    // for(i=0;i<5;i++){
    //     q[i]=p[i];
    // }
    // for(i=0;i<5;i++){
    //     cout<<q[i];
    // }

// 2D array using heap
    int *a[3];
    a[0]=new int(3);
    a[1]=new int(3);
    a[2]=new int(3);

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<a[i][j]<<" ";
            
        }
        cout<<"\n";
    }

    return 0;
}