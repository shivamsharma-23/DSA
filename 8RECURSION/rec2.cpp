#include<iostream>
#include<limits.h>
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

// void print(int arr[],int n,int i){

// //BASE CONDITION
// if(i>=n)
// return;

// //1 case solve krdee
// cout<<arr[i]<<" ";

// //baaki recursion pe  chod dee
// print(arr,n,i+1);

// }
// int main(){
//     int arr[5] = {10,20,30,40,50};
//     int n = 5;

//     int i = 0;

//     print(arr,n,i);
    
// }

// =============================================================================================


// MAXIMUM ELEMNT USING RECURSION 

// void findMaxi(int arr[] , int n ,int i, int &maxi){

//     //1 base condition 
//     if(i>=n){

//      //agar iteration array k size se jyada higyii tohh stop kar jaooo

//         return;
    
//     }

//     // 1 case sambahal loo ek case solve krdoo
//     if(arr[i] > maxi){
//         maxi = arr[i];
//     }


//     //baaki recursion sambahal lega
//     findMaxi(arr,n,i+1,maxi);

// }
// int main(){
//     int arr[] = {1,3,44,5,6,664,23,44,5,62,4543,4};
//     int n = 12;
//     int i = 0;
//     int maxi = INT_MIN;


//     findMaxi(arr,n,i,maxi);

//     cout<<"maximum number in the array is: "<<maxi<<endl;
// }

// this is a comparison operator (==) instead of the assignment operator (=).
// You meant to assign arr[i] to maxi when arr[i] > maxi.


// ============================================
//MINIMUM NUMBER 

// void findMini(int arr[] , int n ,int i, int &mini){

//     //1 base condition 
//     if(i>=n){

//      //agar iteration array k size se jyada higyii tohh stop kar jaooo

//         return;
    
//     }

//     // 1 case sambahal loo ek case solve krdoo
//     if(arr[i] < mini){
//         mini = arr[i];
//     }


//     //baaki recursion sambahal lega
//     findMini(arr,n,i+1,mini);

// }
// int main(){
//     int arr[] = {1,3,44,5,6,664,23,44,5,62,4543,4};
//     int n = 12;
//     int i = 0;
//     int mini = INT_MAX;


//     findMini(arr,n,i,mini);

//     cout<<"minimum number in the array is: "<<mini<<endl;
// }


// ========================================================================
//CHECK KEY     


// bool findKey(int arr[],int key ,int n , int i){
//     //BASE CONDITION

//     if(i>=n){
//         return false;
//     }

//     //if key found
//     if(arr[i] == key){
//         return true;
//     }


//     findKey(arr,key,n,i+1);
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int key = 1;
//     int n = 5;
//     int i = 0;

   

//     if( findKey(arr,key,n,i)){
//         cout<<"key find"<<endl;
//     }

//     else{
//         cout<<"keynotfound";
//     }
// }