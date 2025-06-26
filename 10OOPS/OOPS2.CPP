#include<iostream>
using namespace std;


// //ENCAPSULATION

// class Animal{
// public:

// int age;
// int weight;

// void eat(){
// cout<<"Eating"<<endl;
// }

// };


// int main(){

//     Animal a;
//     a.age = 12;
//     cout<<a.age;
// }



//INHERITANCE - public , private , protected

// class Animal{
// public:

// int age;
// int weight;

// void eat(){
// cout<<"Eating"<<endl;
// }

// };


// class Dog : protected Animal{
// public:
// void print(){
//     cout<<this->age;
// }
// };


// int main(){

//     Animal a;
//     a.age = 12;
//     cout<<a.age<<endl;


//     Dog d1;
//     // d1.eat();

//     d1.print();

// }


//POLYMORPHISM

class Animal{
    public:
    void speak(){

        cout<<"speaking: "<<endl;
    }
};


class Dog:public Animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }

};



int main(){

    Animal a;
    a.speak();

    Dog rocky;
    rocky.speak();


     

    Animal* b = new Dog;
    b->speak();
}

