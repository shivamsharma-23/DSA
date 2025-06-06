//
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


// int solve(vector<int>& arr ,int target){

//     // base case agar target 0 hogya toh return 0
//     if(target == 0){
//         return 0;
//     }
//     // agar -ve value aayi toh int max return krva do

//     if(target < 0){
//         return INT_MAX;
//     }

//     // 1 case solve krna h array m jitne elemnt hj sbpe traverse krvaa doo

//     int mini  = INT_MAX;
//     for (int i = 0; i < arr.size(); i++)
//     {
//        int ans =  solve(arr,target - arr[i]);

//        if(ans != INT_MAX)
//        mini = min(ans+1,mini);
      

//     }

//     return mini;
    
// }
    


// int main(){

//     vector<int> arr{1,2};
//     int target = 5;


//     int ans = solve(arr, target);

//     cout<<"answer is : "<<ans<<endl;

// }


// ======================================USING OUTPUT VALIABLE ==============================


int solve(vector<int>& arr ,int output , int target){
    // BASE CASE JAB TARGET  == OUTPUT

    if(target == output){
        return 0;
    }

    if(output> target){
        return INT_MAX;
    }

    //1 case solve baaki recurrsion 
    int mini = INT_MAX;
    for(int i = 0; i < arr.size();i++){
        int result = solve(arr,output + arr[i],target);

    // Only consider valid results
        if (result != INT_MAX) {
            int totalSteps = result + 1;  // include current element
            if (totalSteps < mini) {
                mini = totalSteps;       // manually tracking min
            }
        }
    }

    return mini;
}



int main(){
    vector <int>arr{1,2};
    int target = 5;
    int output = 0;

    int ans = solve(arr,output,target);

    cout<<"answer is: "<<ans<<endl;
}