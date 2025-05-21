#include<iostream>
using namespace std;

// int main(){

// int arr[3][3] = 
// { 
//         {1,2,3},
//         {1,2,3},
//         {1,2,3}
// };



// // index ---- size n toh  index n-1 bcz 0 se chalu hote h

// // cout<<arr[1][2];

// // cout<<"printing row wise: ";

// for(int i=0;i<3;i++){
    
//     // col k elemnts access krne  

//     for(int j =0 ;j<3;j++){
//         cout<<arr[i][j]<< " ";
//     }
    
//  cout<<endl; 
// }

// }





// ===============input output 2d array ====================

// int main(){


//     int arr[3][3];
//     int row = 3;
//     int col =3;
//     //rows k liye
//     for(int i =0;i<row;i++){

//         //col  k liye 
//         for(int j =0;j<col;j++){

//             cin>>arr[i][j];
//         }


//     }

//     for(int i =0;i<row;i++){

//         //col  k liye 
//         for(int j =0;j<col;j++){

//             cout<<arr[i][j]<<" ";
//         }

//      cout<<endl;
//     }

// }


// =================ROW WISE SUMMM====================


// void printRowiseSum(int arr[][3],int row , int col){

//      for(int i =0;i<row;i++){
//         int sum = 0;

//         //col  k liye 
//         for(int j =0;j<col;j++){
//             sum = sum + arr[i][j];            
//         }

//         cout<<sum<<endl;
//     }

// }
// int main(){


//     int arr[3][3];
//     int row = 3;
//     int col =3;

//     cout<<" taking input : "<<endl;
//     //rows k liye
//     for(int i =0;i<row;i++){

//         //col  k liye 
//         for(int j =0;j<col;j++){

//             cin>>arr[i][j];
//         }


//     }

//     cout<<" prinitng output: "<<endl;
//     for(int i =0;i<row;i++){

//         //col  k liye 
//         for(int j =0;j<col;j++){

//             cout<<arr[i][j]<<" ";
//         }

//      cout<<endl;
//     }

//     cout<<" row wise sum : "<<endl;
//     printRowiseSum(arr,row,col);
// }





// =============== COL WISE SUM=================



void printColwiseSum(int arr[][3],int row , int col){

     for(int i =0;i<row;i++){
        int sum = 0;

        //col  k liye 
        for(int j =0;j<col;j++){
            sum = sum + arr[j][i];            
        }

        cout<<sum<<endl;
    }

}
int main(){


    int arr[3][3];
    int row = 3;
    int col =3;

    cout<<" taking input : "<<endl;
    //rows k liye
    for(int i =0;i<row;i++){

        //col  k liye 
        for(int j =0;j<col;j++){

            cin>>arr[i][j];
        }


    }

    cout<<" prinitng output: "<<endl;
    for(int i =0;i<row;i++){

        //col  k liye 
        for(int j =0;j<col;j++){

            cout<<arr[i][j]<<" ";
        }

     cout<<endl;
    }

    cout<<" row wise sum : "<<endl;
    printColwiseSum(arr,row,col);
}




