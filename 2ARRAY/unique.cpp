
// unique mai xor krvana hai array k elemnts k beech m 

#include<iostream>
#include<vector>

using namespace std;

int find(vector <int> arr){
    int ans = 0;
    for(int i = 0; i< arr.size();i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main(){
    cout<<"give size of vector: ";
    int n ;
    cin>>n;

    vector <int> arr(n);
    for(int i =0;i<arr.size();i++){
        cin>>arr[i];
    }

    int unique = find(arr);
    cout<<" unique elemtn :"<<unique<<" ";
}