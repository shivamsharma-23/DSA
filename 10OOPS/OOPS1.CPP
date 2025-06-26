#include<iostream>
using namespace std ;


class Animal{
    //define karo public ya private usecase k hisabb se
    public:


    // state or property ---- noun age height name 
    int age;
    string name;


    
    // DEFAULT CONSTRUCTOR
    Animal(){
        this->age = 0;
        this->name =" ";

        cout<<"constructor is called "<<endl;
    }



    //PERAMITIRIZED CONSTRUCTOR 
    Animal(int age ){
        this->age = age;
        cout<<"parametirized constructor is calld "<<endl;
    }


    //COPY CONSTRUCTOR 
    Animal(Animal &obj){
        this->age = obj.age;
        this->name = obj.name;
        cout<<"i am inside copy constructor"<<endl;

    }

    // DESTRUCTOR
    ~Animal(){
        cout<<"I AM INDISE DESTRUCTOR"<<endl;
    }




    //functions --- verb
    void eat(){
        cout<<"eating"<<endl;

    }

    void sleep(){
         cout<<"sleeping"<<endl;
    }

};


int main(){

//static
//     Animal ramesh;
//     //jitni baar ek object create hoga chaye static ho ya dynamic
//     //utni baarconstructor call hoga -- 1 baar yha 


//     ramesh.age = 12;
//     ramesh.name = "lion";
//     cout<<"age of ramesh: "<<ramesh.age<<endl;
//     cout<<"name of ramesh: "<<ramesh.name<<endl;

//     //-- fxn call static
//     ramesh.eat();
//     ramesh.sleep();


    
//  //DYNAMIC OBJECT ALLOCATION

//     Animal* suresh = new Animal;
//     // 2 baar yha constructor call hoga by default 


//     suresh -> age = 17;
//     suresh -> name = "doggy";
//     cout<<"age of sursh:"<<suresh->age<<endl;
//     cout<<"name of suresh: "<<suresh->name<<endl;

//     fxn call dynamic
//     suresh -> eat();
//     suresh -> sleep();




Animal a(10);
Animal* b = new Animal(100);


}