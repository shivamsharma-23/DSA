#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int>arr{5,4,3,2,1};
    int n = arr.size();

    // sort krvana haii 1 2 3 4 5 

    for(int i = 0; i < n-1 ;i++){ // n-1 is liye kyuki last elemnt ko check knri ki need nahi haii toh befalty ka time waiste nahi krnaa 

        // andar jaake elemnts ko check karrleee 
        int minElment = i;


        for(int j = i +1 ; j <n ;j++){
            if(arr[j] < arr[minElment]){
                minElment = j;
            }
            
        }
         swap(arr[i],arr[minElment]);
    }





    //printing arrayy

    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    // SMDMNJN

    
}