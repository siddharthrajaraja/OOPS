#include<bits/stdc++.h>
using namespace std;
const double PI=M_PI;
const string MESSAGE="AREA OF ";

/**
 * This is a template function used to print the final result  
 */
template<typename T>
void printingMessage(string shape,T ans){
        cout<<MESSAGE<<shape<<" "<<ans<<endl;
}

/**
 * FindArea class resembles compile-polymorphism (function overloading) 
 * the same Area function is being overloaded three times with different
 * data types and different number of arguments.
 */
class FindArea{
private :
    int side1,side2;
    double radius;
public :
    int Area(int a,int b){
        this->side1=a;
        this->side2=b;
        return this->side1*this->side2;
    }
    int Area(int a){
        this->side1=a;
        this->side2=a;
        return this->side1*this->side2;
    }
    double Area(double a){
        this->radius=a;
        return PI*this->radius*this->radius;
    }
};

/**
 * Rectangle Class inherits the FincArea class to find Area of rectangle.
*/
class Rectangle:public FindArea{
public:
    Rectangle(int a,int b){
        int ans=Area(a,b);
        printingMessage<int>("Rectangle",ans);
    }
};

/**
 * Square class inherits the FindArea class to find area of Square.
*/
class Square : public FindArea{
public :
    Square(int a){
        int ans=Area(a);
        printingMessage<int>("Square",ans);
    }
};

/**
 * Circle class inherits the FindArea class to find area of Circle.
*/
class Circle : public FindArea{
public :
    Circle(double radius){
        double ans=Area(radius);
        printingMessage<double>("Circle",ans);
    }
};

int main(){
    Circle(3.00);
    Square(5);
    Rectangle(1,2);   
    return 0;
}