
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     vector <int>arr{2,0,0,0,2,2,0,2,0,2};

//     int start = 0;
//     int end = arr.size() - 1;

//     int i = 0;
//     // cout<<end;

//     while(end>start){
//         if(arr[i]==0){
//             swap(arr[i],arr[start]);
//             i++;
//             start++;
//         }

//         if(arr[i]==2){
//             swap(arr[i],arr[end]);
//             i++;
//             end--;
//         }
//     }

// //     for(int i =0 ; i<arr.size();i++){
// //         cout<<arr[i]<<" ";
// //     }


//     for(auto val :arr)
// {
//     cout<<val<<" ";
// }}
















#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr{0,0,2,1,0,2,2,0,0,0};
    int start = 0;
    int i = 0;
    int end = arr.size()-1;


    while(i<=end){
         if(arr[i] == 0){
            swap(arr[start],arr[i]);
            start++;
                i++;
        }

        else if(arr[i]== 1){
            i++;
        }

        else{  //(arr[i] == 2)
            swap(arr[i],arr[end]);
            i++;
            end--;
        }      
    }

    for(int val : arr)
 {
        cout << val << " ";
    }
}


