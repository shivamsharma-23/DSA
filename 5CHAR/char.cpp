#include<iostream>
#include<string.h>
using namespace std;


int getlength(char name[]){
    int length  = 0;
    int  i = 0;

    while(name[i] != '\0'){
        length ++ ;
        i++;
    }

    return length;

}



int getReverse(char name[]){
    int start = 0;
    // int i = 0;
    int n = getlength(name);
    int end = n-1;

    // while(start<=end){
    //     swap(name[start],name[end]);
    //     start++;
    //     end-- ;
    // }


    for(int start = 0; start <= end ; start ++){
        swap(name[start],name[end]);
        end--;
    }
}




void replceSpaces(char sentance[]){
    int i = 0;
    int n  =strlen(sentance);
    
    for (int i = 0; i < n; i++)
    {
        if(sentance[i] == ' '){
            sentance[i] = '@';
        }
    }
    
}



bool checkPallindrome(char word[]){

    int i = 0;
    int n = strlen(word);
    int end = n -1;

    while (i <=end)
    {
        /* code */
        if(word[i] != word[end]){
            return false;

        }

        else{
            i++;
            end--;

        }
    }

    return true;
    
}




void convertUpper(char word[]){
    int n = strlen(word);
    

    for(int i = 0 ; i <n ;i++){
        word[i] = word[i]- 'a' + 'A';
}
}




void convertLower(char word[]){
    int n = strlen(word);
    
    
    for(int i = 0 ; i <n ;i++){
        if(word[i] >= 'A' && word[i]<='Z')
        word[i] = word[i]- 'A' + 'a';
}
}



int main(){

    // cout<<" enter your name: ";

    // char name[100];

    // cin >> name;

    // cout<<"name is "<<name << endl;

    // return 0;


//single input

// char ch[4];

// cin >>ch[0] >> ch[1];
// ch[3] ='b';

// cout<<ch[0] <<ch[1] <<ch[3];





// char ch[7];
// cin>>ch;

// for(int i =0 ; i< 7 ;i++){

//     cout<<"at i"<<i<<" "<<ch[i]<<endl;
// }


// char arr[50];
// cin>>arr;
// cout<<arr;


//input with space


// char arr[70];

// cin.getline(arr,50);
// cout<<arr;


// =====================================/

//LENGTH OF STRING

// char name[100];

// cin>>name;

// cout<<"length " <<getlength(name)<<endl;



// ==================================================
// predefined fxn avialble 

// cout<< strlen(name);


// //INITIALLY ARRAY

// cout<<"BEFOR INITALLY"<<name<<endl;


// // ================================
// //REVESE A STRING 

// getReverse(name);
// cout<<"reverse:  "<<name<<endl;



// char sentance[100];

// cin.getline(sentance,40);
// cout<<"print inital sentance"<<sentance <<endl ;

// replceSpaces(sentance);

// cout<<"print after "<<sentance<<endl;





////PALLINDROME
// char word[60];
// cin >> word;

// checkPallindrome(word);

// cout<<checkPallindrome(word)<<endl;



//uppercase conversion

// char word[20] = "nmohan";
// // cin>>word;

// convertUpper(word);
// cout<<"lower to upper:"<<word<<endl;



//CONVERTING UPPER TO LOWER
// char word[40] = "mOHAN";
// convertLower(word);
// cout<<word;












}