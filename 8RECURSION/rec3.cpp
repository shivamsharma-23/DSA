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


// ========================================================================================================================

// int binarySearch(vector <int>& v,int& key,int& n){

//     int s  = 0;
//     int e = n-1;
    

//     while(s<=e){

//         int mid = s + (e-s)/2;

//         if(v[mid] == key){
//             return mid;
//         }

//         if(v[mid] < key){
//             s = mid+1;
//         }

//         else{

//             e = mid -1;
//         }

//         return false;
//     }

// }


// int main(){
//     vector <int> v{10,20, 30,40,50,60,70};

//     int n  = v.size();
//     int i  = 0;
//     int key  = 499;
//     int ans   = binarySearch(v,key,n);

    
//     if(ans != 0){
//         cout<<"key found : "<<ans<<endl;

//     }

//     else{

//         cout<<"key not found";
//     }
// }


// ==========================================================================================================

// int binarySearch(vector <int>& v,int& key,int& n)
// {

//     int s  = 0;
//     int e = n-1;
    

//     while(s<=e){

//         int mid = s + (e-s)/2;

//         if(v[mid] == key){
//             return mid;
//         }

//         if(v[mid] < key){
//             s = mid+1;
//         }

//         else{

//             e = mid -1;
//         }

//         return false;
//     }

// }


// bool checkSorted(vector<int>&v,int& n,int i)
// {

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


//     int main()
// {

//         vector <int> v{10,20,30,40,50};
//         int n = v.size();
//         int i = 0;
//         int key = 30;

//         bool ans = checkSorted(v,n,i);

//         if(ans)
//     {
//         cout<<"array is sorted"<<endl;

//         int ans   = binarySearch(v,key,n);

        
//         if(ans != 0)
//         {
//          cout<<"key found  at: "<<ans<<endl;

//         }

//         else
//         {
//          cout<<"key not found";
//         }

//     }

//         else
//         {
//             cout<<"array is not sorted"<<endl;
//         }


// }



