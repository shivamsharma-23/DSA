#include<iostream>
using namespace std;


bool binarySearch(int arr[][4], int rows, int col , int target){

    int s = 0;
    int e = rows*col-1;
    int mid = s + (e-s)/2;

    while(s<=e){

        int rowIndex = mid /col;
        int colIndex = mid%col;
        int element = arr[rowIndex][colIndex];

        if(element == target){

            cout<<"at "<<rowIndex<<"th row "<<colIndex<<" th column"<<" ";
            return true;
        }

        if(element<target){
            //right search 
            s = mid + 1;
        }

        else{
            //left search

            e = mid -1 ;
        }

        //update  mid
         mid = s + (e-s)/2;
    }
    
    return false;

}

int main(){

    int arr[5][4] ={ {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int rows =5;
    int col = 4;

    int target = 19;

    bool ans = binarySearch(arr,rows,col,target);

    if(ans){

        cout<<"found";
    }

    else{

        cout<<"not found";
    }

}