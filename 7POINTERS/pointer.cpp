#include<iostream>
using namespace std;

int main(){

    // int a = 5;
    // cout<<a<<endl;
    // // cout<<&a<<endl;

    // int* ptr = &a;

    // cout<<"address of a : "<<&a<<endl;

    // cout<<"value stored at ptr: "<<ptr<<endl;

    // cout<<" at *ptr: "<<*ptr<<endl;

    // cout<<"address of ptr: "<<&ptr<<endl;

    // cout<<"at *a"<<*a<<endl; //error


    int a =5;
    char ch = 'b';
    double db =5.005;

    int* p = &a;
    char* c = &ch;
    double* d = &db;

    cout<<sizeof(db)<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;



} 