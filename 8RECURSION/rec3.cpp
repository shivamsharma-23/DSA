#include<iostream>
#include<vector>
using namespace std;



// bool checkSorted(vector<int>&v,int& n,int i){

//     //jab i ki value n k equal ho prr i 0 se start hotha hai toh n-1

//     if(i == n-1){
//         return true;
//     }


//     // 1 case solve kardombaaki recirssion sambahala laegaa
//     if(v[i+1]< v[i]){
//         return false;
//     }


//     //recursive call

//     return checkSorted(v,n,i+1); // I+1 BECAUSE AFTER CHECKING AT I WE NEED TO MOVE TO THE NEXT ELEMENT
// }

// int main(){

//     vector <int> v{10,20,30,4,50};
//     int n = v.size();
//     int i = 0;

//     bool ans = checkSorted(v,n,i);

//     if(ans){
//         cout<<"array is sorted"<<endl;

//     }

//     else{
//         cout<<"array is not sorted"<<endl;
//     }
// }