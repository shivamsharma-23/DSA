// array k pair check karo jinki diff target k equal hoo


#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout<<"given input for size: "<<endl;
    int n,target;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }

    cout<<"give input for target :"<<endl;
    cin>>target;


    int count = 0;

    //pair check krle pair kaise banate the i =0 and j = i+1

    for(int i =0 ; i <n;i++){
        
        for(int j = i+1 ;j<n;j++){

            if(abs(arr[i] - arr[j])== target ){
                count ++;
            }

            // if(arr[i] - arr[j] == target){
            //     count++;
            // }
            
            // oh tu ek hi order check kar raha hai: arr[i] - arr[j]

            // Lekin agar kabhi arr[j] - arr[i] == target ho, toh wo pair miss ho jayega.
        }
    }

    if(count != 0){
        cout<<count<<" ";
    }

    else{
        cout<<"not found";
    }
    
    // cout<<count;

}
