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


    // int a =5;
    // char ch = 'b';
    // double db =5.005;

    // int* p = &a;
    // char* c = &ch;
    // double* d = &db;

    // cout<<sizeof(db)<<endl;
    // cout<<sizeof(a)<<endl;
    // cout<<sizeof(ch)<<endl;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(c)<<endl;
    // cout<<sizeof(d)<<endl;

    int arr[4] = {10,20,30,40};

    int* p =arr;

    // int* ptr = arr;
    // cout<<" arr: "<<arr<<endl;
    // cout<<" *arr: "<<*arr<<endl;
    // cout<<" arr[0] "<<arr[0]<<endl;
    // cout<<" &arr[0]: "<<&arr[0]<<endl;
    // cout<<" &arr: "<<&arr<<endl;
    // cout<<" *arr[0]: "<<*arr[0]<<endl; -- error


    int i =3;

    cout<<"i[arr]: "<<i[arr]<<endl;

    cout<<"arr[i]: "<<arr[i]<<endl;

    cout<<"*(p) + 1: " <<*(p) + 1<<endl; //index m naahi value m ek add hora hai

    cout<<"*(p+ 1): " <<*(p+ 1)<<endl;

}