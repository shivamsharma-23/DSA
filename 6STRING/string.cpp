#include<iostream>
#include<string>

using namespace std;

int main(){

    // string str;

    // getline(cin ,str);

    // // cin.getline(str);  ------- wrong syntaxx for strng

    // cout<<str;

    string s = "Hello";
cout << s.length(); // or s.size()
s.push_back('!');   // Hello!
s.pop_back();       // Hello

string s = "HelloWorld";
cout << s.substr(0, 5); // Hello

s.find("lo");  // 3
s.rfind("l");  // 9

s.append("123");  // HelloWorld123

s.replace(0, 5, "Hi");  // HiWorld

string s = to_string(123);  // "123"

}