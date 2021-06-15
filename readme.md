# Some interesting OOPS concepts in C++11

* # Polymorphism + Inheritance 👍    

    * ## Compile-time Polymorphism : 
        This type of polymorphism is achieved by function overloading or operator overloading.

        * #### Function Overloading :
            
            * Link to code : [Learn More](./functionOverloading.cpp) 

            * Some important things need to be kept in mind while learning Function Overloading : 

                1. Function declarations that differ only in the return type.
                2. Member function declarations with the same name and the name parameter-type-list cannot be overloaded if any of them is a static member function declaration.
                3. Parameter declarations that differ only in a pointer * versus an array [] are equivalent. That is, the array declaration is adjusted to become a pointer declaration. Only the second and subsequent array dimensions are significant in parameter types
                4. Parameter declarations that differ only in that one is a function type and the other is a pointer to the same function type are equivalent.
                5. Parameter declarations that differ only in the presence or absence of const and/or volatile are equivalent. That is, the const and volatile type-specifiers for each parameter type are ignored when determining which function is being declared, defined, or called.
                6. Two parameter declarations that differ only in their default arguments are equivalent. 

        * #### Operator Overloading 👍 : 

            * Link to code : [Learn More](./operatorOverload.cpp)

            * Some important things need to be kept in mind for learning Operator-Overloading : 

                1. Existing operators can only be overloaded, but the new operators cannot be overloaded.
                2. The overloaded operator contains atleast one operand of the user-defined data type.
                3. We cannot use friend function to overload certain operators. However, the member function can be used to overload those operators.
                4. When unary operators are overloaded through a member function take no explicit arguments, but, if they are overloaded by a friend function, takes one argument.
                5. When binary operators are overloaded through a member function takes one explicit argument, and if they are overloaded through a friend function takes two explicit arguments.

    * ## Run-time Polymorphism : 
    
        This type of polymorphism is achieved by Function Overriding.
        
        * Fucntion Overriding 👍 
            * Link to code : [Learn More](./functionOverriding.cpp)

            * It is redefinition of base class function in its derived class with same signature i.e return type and parameters.But there may be situations when a programmer makes a mistake while overriding that function. So, to keep track of such an error, C++11 has come up with the keyword override. It will make the compiler to check the base class to see if there is a virtual function with this exact signature. And if there is not, the compiler will show an error.

            
            * Some important things to be kept in mind while understanding Function Overriding : 

                1. There is a method with the same name in the parent class.
                2. The method in the parent class is declared as “virtual” which means it was intended to be rewritten.
                3. The method in the parent class has the same signature as the method in the subclass.
                4. Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
                5. Functions are declared with a virtual keyword in base class.
                6. The resolving of function call is done at Run-time.
                7. [Click to know More](https://www.geeksforgeeks.org/virtual-function-cpp/)

        