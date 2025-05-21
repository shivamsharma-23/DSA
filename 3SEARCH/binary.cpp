#include<iostream>
using namespace std;


// int binarySearch(int arr[],int size,int target)
// {
//     int start = 0;
//     int end = size -1;
//     int mid = start + (end-start)/2;

//     // loop k andar jakee
//     while(start<=end)
//     {
//        int element = arr[mid];
//        if(element == target)
//        {
//         return mid;       
//         }

//         else if(target < element){
//             //lest m search karo end ko  move karengee
//             end = mid -1;
//         }
        
//         else{

//             //right m search ksro start ko move karo

//             start = mid +1;
//         }

//         mid = start + (end-start)/2;

//     }

// //elemnt not found ;
//      return -1;
// }



// int main()
// {

// int arr[] = {1,2,3,4,5,6,7};
// int size  = 7 ;
// int target = 5;

// int find = binarySearch(arr,size,target);

// if(find == -1)
// {
//     cout<<"target not found "<<endl;
// }

// else
// {
//     cout<<"target found at "<<find<<"indexx";
// }

// }



// =====================BINARYYYYYYYY SEARCH  1ST OCCURENCE======================


// int main()
// {

//     int arr[] = {1,2,3,4,4,4,4,4,5,6};
//     int target = 4;
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int start = 0;
//     int end = size-1;
//     int mid = start + (end -start)/2;
//     int ans = -1;   
//      while(start<=end)
//       {
//             int element = arr[mid];
//             if(element == target){
//                 // cout<<"FIRST OCCURENCE OF TARGET AT "<<mid;
//                 ans = mid;
//                 start = mid +1;
//                 // cout<<ans;
//             }
            
        
//             // target bada hai mid se toh right m search karo start ko move
//             else if(target > element){

//                 start = mid + 1;
//             }

//             //target chotha hai mis de toh left m search karo or end ko peeche le aaooo
//             else{

//                 end = mid - 1;
//             }


//             mid = start + (end -start)/2;

//             // cout<<ans;
//             // return 0;
//       }

//       if(ans != -1){
//          cout<<ans;
//       }

//       else{

//         cout<<"not found";
//       }
      
// }


// ==================TOTAL OCCURENCE=================================

int main()
{

    int arr[] = {1,2,3,4,4,4,4,4,5,6};
    int target = 4;
    int size = sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = size-1;
    int mid = start + (end -start)/2;
    int numTarget = 0;   
     while(start<=end)
      {
            int element = arr[mid];
            if(element == target){
                start = mid +1;
                 numTarget++;
                // cout<<ans;
            }
            
        
            // target bada hai mid se toh right m search karo start ko move
            else if(target > element){

                start = mid + 1;
            }

            //target chotha hai mis de toh left m search karo or end ko peeche le aaooo
            else{

                end = mid - 1;
            }


            mid = start + (end -start)/2;

            // cout<<ans;
            // return 0;
      }

      if(numTarget != 0){
         cout<<numTarget;
      }

      else{

        cout<<"not found";
      }
      
}
