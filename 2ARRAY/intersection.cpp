
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] = {10,230,44,5,52,4};

    int brr[] = {230,33,45,33,55,33};
    
   int sizea = 6;
    int sizeb =6;

    vector <int>ans;

    //1 array k sare elemnt selct krte h fir 
    //dusre elemnt k el se compare 
    // if 1 elemnt 2 k elment k qqual 
    // pushback krva dnege vector m 

    for(int i= 0; i <sizea; i++)
    {
        int ele = arr[i];

        for(int j =0 ;j<sizeb;j++){
            if(ele == brr[j]){
                ans.push_back(ele);
            }
        }
    }

    for(auto val : ans){
        cout<<val<<" ";
    }

}
