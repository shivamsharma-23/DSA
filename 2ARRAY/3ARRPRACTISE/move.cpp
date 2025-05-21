#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr{-1,-2,3,4,-9,10,-11};
    int start = 0;
    int end = arr.size()-1;
    // int i =0;

    while(start <=end){
        if(arr[start]<0){
            // swap(arr[i],arr[start]);
            // i++;
            start++;
        }

        else if(arr[end]>0){
            // swap(arr[i],arr[end]);
            // i++;
            end--;
        }

        else{
            swap(arr[start],arr[end]);
            start++;
            end--;
            
        }

    }

    for(auto  value : arr){
        cout<<value<<" ";
    }
}