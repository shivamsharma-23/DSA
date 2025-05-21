//INDEXXX OF OCCURENCE OF AN ELEMENT IN ARRAY

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[] = {1,2,3,4,5,6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int target = 5;

//     int s = 0;
//     int e = size -1;
//     int mid = s + (e-s)/2;

//     while(s<=e){

//         if(target == arr[mid]){
//             cout<<mid;
//             return 0;
//         }

//         if(target>arr[mid]){
//             //right search 
//             s = mid+1;
//         }
//         else{
//             //left search
//             e = mid -1;

//         }

//         mid = s + (e-s)/2;


//     }

//     cout<<" target not found";
//     return 0 ;

// }


// INDEX OF LAST OCCURENCE OF AN ELEMENT IN ARRAY

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[] = {1,2,3,4,5,5,5,6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int target = 5;
//     int ans = -1;
//     int s = 0;
//     int e = size -1;
//     int mid = s + (e-s)/2;

//     while(s<=e){

//         if(target == arr[mid]){
//             ans = mid;
//             // start ko right mai bhej denge check krne k liye ki woh sahinhai bhi kee nahii kahi aage or bhi ans hue same toh
//             s = mid +1;
            
//         }

//         if(target>arr[mid]){
//             //right search 
//             s = mid+1;
//         }
//         else{
//             //left search
//             e = mid -1;

//         }

//         mid = s + (e-s)/2;


//     }

//     if(ans != -1){
//         cout<<ans;
//     }

//     else{
//         cout<<" target not foundd";
//     }
// }

//===================================================================================
/// FIRST AND LAST OCCURENCE OF AN ELEMENT IN AN ARRAY

#include<iostream>
using namespace std;

int findFirst(int arr[],int size , int target){
    int start = 0;
    int end  =size -1;
    int mid = start + (end - start)/2;
    int first = -1;


    while(start<= end){

        if(target == arr[mid]){
            first = mid;
            //check isse phle toh ye occur nahi hua na kahi
            end = mid -1;
        }

       else if(target > arr[mid]){
            //right m search
            start = mid+1;
        }

        else{
            //left m search

            end = mid -1 ;

        }

        mid = start + (end - start)/2;
    }

    return first;
}



int findLast(int arr[],int size , int target){
    int start = 0;
    int end  = size -1;
    int mid = start + (end - start)/2;
    int last = -1;


    while(start<= end){

        if(target == arr[mid]){
            last = mid;
            //check isskee baad toh ye occur nahi hua na kahi
            start = mid +1;
        }

        else if(target > arr[mid]){
            //right m search
            start = mid+1;
        }

        else{
            //left m search

            end = mid -1 ;

        }

        mid = start + (end - start)/2;


    }

    return last;
}





int totalCount(int arr[],int size,int target){

    int first = findFirst(arr,size,target);
    int last = findLast(arr,size,target);

    if(first == -1 || last == -1){
        return 0;
    }

    else{
        return last - first + 1;
    }

} 

int main(){

    int arr[] = {1,2,3,3,5,5,5,5,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 1;
    
    int first = findFirst(arr,size,target);
    int last = findLast(arr,size,target);
    int count = totalCount(arr,size,target);

    cout<<" first occurence  "<<first<<endl;
    cout<<"lasst occurence "<<last<<endl;
    cout<<"total count of "<<target<<" is  equals to "<<count<<endl;

}