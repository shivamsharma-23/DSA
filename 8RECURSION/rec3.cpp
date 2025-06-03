#include<iostream>
#include<vector>
#include<strings.h>
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



// ======================================== BINARY SEARCH USING RECURSSION =============================

// ------- ASSIGNMENT(=JAB KISI VALUE KO KISI DUSRI VALUE M PASS KRVANA HOO) AND COMARISON OPERSTOR(== JAB KINI DO VALUE KI QUANTITY CHECK KRNI HI SAME HAI K NAHI ) KA DHYAAN RAKHH 

// int binarySearch(vector<int>& v,int s ,int e ,int& key){

//     int mid = s + (e-s)/2;

//     //BASE CASEEE 1 kab rukna hai ---- AGAR KEY IS NOT PRESENT OR 1 ELEMNT ONLY
//     if(s>e){
//         return -1;
//     }

//     // CASE 2 -- YAA FIR MID MIL JAYE
//     if(v[mid] == key){
//         return mid;
//     }


//     // 1 case solve krna hai baaki recurrsion sambhal lega
    
//     // v[mid] < key --------- right m search karengee
//     if(v[mid] < key){
//         return binarySearch(v,mid+1,e,key);
//     }

//     //v[mid] > key ------------ left search
//     else{

//         return binarySearch(v,s,mid-1,key);
//     }
// }


// int main(){
//     vector <int>v{10,20,30,40,50,60};

//     int n =  v.size();
//     int s = 0;

//     int e =n-1;

//     int key = 60;

//     int ans = binarySearch(v,s,e,key);

//     if(ans != -1){
//         cout<<"key found at: "<<ans;
//     }

//     else{

//         cout<<"key not found";
//     }
// }



// ============================================================================


void printSubseq(string str, string output , int i)
{
    //BASE CASEE
    if(i>=str.length())
    {
        cout<<output<<endl;
        return;
    }
   //exclude
    printSubseq(str,output,i+1);
    //include
    output.push_back(str[i]);
    printSubseq(str,output,i+1);
}

int main()
{
   string str = "abc";
   string output = " ";
   int i =0;
   printSubseq(str ,output ,i);
}