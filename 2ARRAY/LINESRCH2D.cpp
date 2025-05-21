// #include<iostream>
// using namespace std;

//     bool findKey(int arr[][3],int row,int col,int key){
        
//         for(int i = 0; i<row ;i++){

//             //col

//             for(int j =0;j<col;j++){
//                 if(arr[i][j] == key){
//                     return true;
//                 }
//             }
//     }
//             return false;
    

//     }

// int main(){


//    int arr[3][3];
//    int row = 3;
//     int col =3;

//     cout<<"input"<<endl;

//     for(int i = 0; i<row ;i++){

//         //col

//         for(int j =0;j<col;j++){
//             cin>>arr[i][j];
//         }
//     }


//     for(int i = 0; i<row ;i++){

//         //col

//         for(int j =0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// cout<<findKey(arr,3,3,8);

// }








// ================= max min======================\

// #include<iostream>
// #include<limits.h>
// using namespace std;

//     int maxi(int arr[][3],int row,int col)
//     {
//         int maxnum = INT_MIN;
        
//         for(int i = 0; i<row ;i++)
//         {
//             for(int j =0;j<col;j++)
//             {
//                 if(arr[i][j] > maxnum)
//                 {
//                     maxnum = arr[i][j];
                    
//                 }
//             }
//         }
//       return maxnum;

//     }

// int main(){


//    int arr[3][3];
//    int row = 3;
//     int col =3;

//     cout<<"input"<<endl;

//     for(int i = 0; i<row ;i++)
//     {

//         //col

//         for(int j =0;j<col;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }


//     for(int i = 0; i<row ;i++)
//     {

//         //col

//         for(int j =0;j<col;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     cout<<maxi(arr,3,3);

// }

// ==============================mimim


#include<iostream>
#include<limits.h>
using namespace std;

    int min(int arr[][3],int row,int col)
    {
        int maxnum = INT_MAX;
        
        for(int i = 0; i<row ;i++)
        {
            for(int j =0;j<col;j++)
            {
                if(arr[i][j] < maxnum)
                {
                    maxnum = arr[i][j];
                    
                }
            }
        }
      return maxnum;

    }

int main(){


   int arr[3][3];
   int row = 3;
    int col =3;

    cout<<"input"<<endl;

    for(int i = 0; i<row ;i++)
    {

        //col

        for(int j =0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }


    for(int i = 0; i<row ;i++)
    {

        //col

        for(int j =0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<min(arr,3,3);

}
