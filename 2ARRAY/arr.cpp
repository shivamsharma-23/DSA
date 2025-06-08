
#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;

// int main(){

//     int arr[]={1,2,34,5};
//     for(int i =0;i<4;i++){
//         cout<<arr[i];
//     }

// }


// int main(){

//     int arr[5];

//     // taking input
//     cout<<"give 5 input";
//     for(int i =0 ; i<5;i++){
//         cin>>arr[i];
//     }

//     // printing input
//     cout<<"inputs are ";
//     for(int i =0; i<5;i++){
//         cout<<arr[i]<<" ";
//     }

// }
// =======================================/
//LINEAR SEARCH 


// int main(){
//     int arr[5] = { 1,2,3,4,5};
//     int size = 5;

//     int key;
//     cout<<"enter key: ";
//     cin>>key;

//     for(int i =0;i<size;i++){
//         if(arr[i]==key){
//             cout<<"present ";
//         }

//         else{
//             cout<<"not present ";
//         }
//         break;
//     }

// }

// ==========================

// int main(){

//     int arr[8];

//     //taking input
//     cout<<"give 8 inputs: ";
//     for(int i =0; i<8;i++)
//     {
//         cin>>arr[i];
//     }


//     // printing 
//     for(int i =0 ; i<8;i++)
//     {
//         cout<<arr[i];
//     }

// =================================================
//    
 // finding key 

//     int key , size =8;
//     cout<<"enter key: ";
//     cin>>key;

//     for(int i =0 ; i <size;i++){
//         if(arr[i] == key){
//             cout<<key<<"is present ";
//         }

//         else{
//             cout<<"key is not present";
//         }
//         break;
//     }

//     cout<<endl;
// }

// =============================================================================
// #finding 1 and 0 in array


    // int main(){

    //     int arr[] ={ 1,2,2,6,0,0,0,0,0,0,0,0,0,1,3,4,5,1,1,1,1,1,};
    //     int size = 20;
    //     int numZero = 0;
    //     int numOne = 0;

    //     for(int i =0 ;i <size ; i++)
    //     {
    //         if (arr[i]== 0)
    //         {
    //             numZero++;
    //         }

    //         if(arr[i]==1)
    //         {
    //             numOne++;
    //         }

            
    //     }

    //     cout<<"no of zeroes :"<<numZero<<"\n";
    //     cout<<"no of ones: "<<numOne;
    // }



    // =======================================================================
    // int main(){

    //     int arr[] ={ 1,2,2,6,0,0,0,0,0,0,0,0,0,1,3,4,5,1,1,1,1,1,};
    //     int key, size = 20;

    //     cout<<"enter key: ";
    //     cin>>key;
    //     int numKey = 0;
    //     // int numOne = 0;

    //     for(int i =0 ;i <size ; i++)
    //     {
    //         if (arr[i]== key)
    //         {
    //             numKey++;
    //         }

            
    //     }

    //     cout<<"no of "<<key<<":"<<numKey<<"\n";
        
    // }

// ===========================================================
//maximum and minimum in arrayy

    // int main(){

    //     int arr[] ={ 12,34,5,5,9,4,2453,43};
    //     int maxi = INT_MIN;
    //     int size = 11;

    //     for(int i =0 ; i< size;i++){
    //         if(arr[i] > maxi){
    //             maxi = arr[i];
    //         }
    //     }
        
    //     cout<<"max no is: "<<maxi;
    // }



    //   int main(){

    //     int arr[] ={ 12,34,5,5,9,4,2453,43};
    //     int min = INT_MAX;
    //     int size = 11;

    //     for(int i =0 ; i< size;i++){
    //         if(arr[i] < min){
    //             min = arr[i];
    //         }
    //     }
        
    //     cout<<"min no is: "<<min;
    // }


// FIND OUT THE MAXIMUM ELEMENT 

    int main(){
     int arr[] = {1,2,3,4,5,6,7,8};
     int n = 8;
     int key  = 2;


     //for 
     for(int i = 0; i < n ;i++){
        if(key == arr[i]){
            cout<< key <<" key found"<<endl;
            return 0;

    }
     }
    cout<<"key not found"<<endl;
    return 0;
}




    