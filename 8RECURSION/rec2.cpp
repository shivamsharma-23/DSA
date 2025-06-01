#include<iostream>
using namespace std;


//REACHING AT NTH STAIR

// int countStairs(int n){

//     //BASE CONDITION ROKNA KANB HAII YAA FIR HAME KYY PTA HAI CODE K BAARE MEE
//     if(n == 0  || n ==1)
//     return 1;

//     int ans = countStairs(n-1) + countStairs(n-2);
//     return ans;
// }

// int main(){

//     int n;
//     cout<<"enter stair where you waant to reach : ";

//     cin>>n;


//     int ans = countStairs(n);
//     cout<<"nu of ways are: "<<ans<<endl;
// }

// ==============================================================================

//PRINTING ARRAY USING RECURRSION 

void print(int arr[],int n,int i){

//BASE CONDITION
if(i>=n)
return;

//1 case solve krdee
cout<<arr[i]<<" ";

//baaki recursion pe  chod dee
print(arr,n,i+1);

}
int main(){
    int arr[5] = {10,20,30,40,50};
    int n = 5;

    int i = 0;

    print(arr,n,i);
}