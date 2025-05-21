
#include<iostream>
using namespace std;

// 1
// int main(){
//     int row ,col;
//     cout<<"enter no of rows and coloumns: ";

//     cin>>row>>col;

//     for(int i = 0; i<row;i++){
//             for(int j=0;j<col;j++){
//                 cout<<"*";
//             }

//             cout<< endl;
//     }
// }



    // int main()
    // {
    //     cout<<"give no of rows and cols: "<<"\n";
    //     int n , m ;
    //     cin>>n >>m;

    //     for(int row = 0; row<n; row++)
    //     {
    //             if(row==0 || row == 2)
    //             {
    //                 for(int col = 0; col<m ;col++)
    //                 {
    //                     cout<<"*";
    //                 }
    //             }

    //             else
    //             {
    //                 cout<<"*";
    //                 for(int i =0 ; i<3;i++)
    //                 {
    //                     cout<<" ";
    //                 }

    //                 cout<<"*";
    //             }

    //             cout<<endl;
    //     }
         
    // }



    // int main(){
    //     int n ,m;

    //     cin >> n >>m;

    //     for(int row =0 ; row < n; row++){
    //         for(int col =0 ; col < row +1 ; col++){
    //             cout<<"x";
    //         }

    //         cout<<endl;

    //     }
    // }


    //  int main(){
    //     int n ,m;

    //     cin >> n >>m;

    //     for(int row =0 ; row < n; row++){
    //         for(int col =0 ; col < n- row ; col++){
    //             cout<<col;
    //         }

    //       cout<<endl; 
            
    //     }
         
    // }


    int main()
    {
        int n;
        cin >> n;

        for(int row = 0;row<n;row++)
        {

              //spacee
            for(int col = 0 ; col < n - row - 1; col++)
            {
                cout<<" ";
            }  


            // starr

            for(int col = 0; col < row + 1; col ++)
            {
                cout<<"* ";

            }

            cout<<endl;
        }
    }