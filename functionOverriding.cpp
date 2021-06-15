#include<bits/stdc++.h>
using namespace std;

class ClassA{
public : 
    virtual void funcA(){
        cout<<"My Name is :";
    }

};

class ClassB: public ClassA{
public:
    virtual void funcA(){
        cout<<"Siddharth Raja";
    }
};


int main(){
    ClassA *obj1=new ClassA();
    cout<<"Before Dynamic Binding \n";
    obj1->funcA();
    cout<<endl;
    ClassB obj2;
    obj1=&obj2;
    cout<<"After Dynamic Binding \n";
    obj1->funcA();

    return 0;
}