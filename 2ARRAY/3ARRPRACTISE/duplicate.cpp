// FINDING DUPLICATE IN AN ARRAY

#include<iostream>
using namespace std;

int main(){


    int arr[]={1,2,2,3,3,5};
    int size =6;

    //nested loop
    for(int i =0;i<size;i++){
        int element = arr[i];
        for(int j = i+1 ;j<size;j++){
            if(element == arr[j]){
                
                cout<<element<<" duplicate found "<<" ";
               cout<< endl;
            }
            
            
            
        }
    }

}



// // removing duplicates from array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = { 1,2,3,4,5,6,22,4,3};
//     int size =  sizeof(arr) / sizeof(arr[0]);

//     int temp[100];
//     int newsize = 0;

//     //original araay k andar jaake duplicate pe 0 or 1 ki stamp lagani ho tohh

//     for(int i =0; i<size;i++)
//     {
//         bool isDuplicate = false;


//         //aage jaake check if element already exists in temp or not 

//         for(int j = 0; j<newsize;j++){

//             if(arr[i]== temp[j])
//             {
//                 isDuplicate = true;
//                 break;
//             }
//         }

//         //agar temp m woh elemnt nahi hai joh uppar check kiya hai toh usee add krkde fir jaaekee

//         if(!isDuplicate)
//         {
//             temp[newsize] = arr[i];
//             newsize++;
//         }
//     }


//     // array jisme duplicate nai hai woh print karvani haii

//     cout<<"array after removing duplicates: ";
//     for(int i = 0; i< newsize;i++)
//     {
//         cout<<temp[i]<<" ";
//     }
// }




// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 2, 3, 4, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int temp[100]; // temporary array to store unique elements
//     int newSize = 0;

//     // Loop through each element of original array
//     for (int i = 0; i < size; i++) {
//         bool isDuplicate = false;

//         // Check if the element already exists in temp[]
//         for (int j = 0; j < newSize; j++) {
//             if (arr[i] == temp[j]) {
//                 isDuplicate = true;
//                 break;
//             }
//         }

//         // If not found in temp, add it
//         if (!isDuplicate) {
//             temp[newSize] = arr[i];
//             newSize++;
//         }
//     }

//     // Print the array without duplicates
//     cout << "Array after removing duplicates: ";
//     for (int i = 0; i < newSize; i++) {
//         cout << temp[i] << " ";
//     }

//     return 0;
// }
