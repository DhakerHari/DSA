#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int a = 10;
    int *p = &a;
    cout<<"the data of a is "<<a;
    cout<<"\nthe address of a is "<<&a;
    cout<<"\nthe data of *p is "<<*p;
    cout<<"\nthe data of p is "<<p;

    return 0;
}