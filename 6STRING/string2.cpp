//REMOVING ADJECENT CHARACTER IN A STRING 

#include<iostream>
#include<string>
#include<strings.h>
using namespace std;

int main(){
//     string s;
//     cout<<"provide string: ";
//     cin>>s;

//     string ans = "";
//     int i = 0;


//     while(i < s.length())
//     {

//         if (s.length() > 0)
//         {

//             if((ans[ans.length() -1]) == s[i]){
//                 ans.pop_back();
//             }

//             else{
//                 ans.push_back(s[i]);
//             }

//         }

//         else{

//             ans.push_back(s[i]);
//         }
//         i++;

//     }

//     cout<<" modified string "<<endl; 
//     cout<<ans;


//removing substring occurence 


    string s,part;
    cout<<"enter string: ";
    cin>>s;

    cout<<"enter part: ";
    cin>>part;
        int pos = s.find(part);
        while(pos != string::npos){
            s.erase(pos,part.length());
            pos = s.find(part);
        }
        cout<<s;
        
    }

