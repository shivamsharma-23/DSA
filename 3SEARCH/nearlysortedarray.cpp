#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr,int target){
    int s = 0;
    int e = arr.size() -1;
    int mid = s+(e-s)/2;

    while(s <= e){

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid-1] == target){
            return mid-1;

        }
        else if(arr[mid+1]== target){
            return mid+1;
        }

        else if(target > arr[mid]){
            //right search

            s = mid +2;
        }

        else{

            //left search
            e = mid -2;
        }

        mid = s+(e-s)/2;

    }

    return -1;
}

int main(){

    vector <int> arr{10,3,40,20,50,80,70};
    int target = 4;

    int ans = binarySearch(arr,target);
    

    if(ans != -1){
        cout<<"index of target "<<ans<<" ";
    
    }

    else{
        cout<<"target not found";
    }


}
