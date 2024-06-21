//Example 1: Function Declaration

#include <iostream>
int add(int a,int b);
int main(){
    int x=5,y=3;
    int result=add(x,y);
    std::cout<<"Sum: "<<result<<std::endl;
    return 0;
}
int add(int a,int b){
    return a+b;
}

/*In this example:

The add function is declared before the main function with int add(int a, int b);.
Inside main, add function is used without its implementation details being present.
The actual implementation of add is defined after the main function with int add(int a, int b) { return a + b; }.

Example 2: Function Definition*/

#include <iostream>
int add(int a,int b){
    return a+b;
}
int main(){
    int x=5,y=3;
    int result=add(x,y);
    std::cout<<"Sum: "<<result<<std::endl;
    return 0;
}

/*In this example:

The add function is fully defined at the beginning of the file with int add(int a, int b) { return a + b; }.
Inside main, add function is used directly.
There is no separate declaration of add before its definition; the function is defined and used in the same file.

Summary
Function Declaration: Specifies the function's name, return type, and parameter list without providing the function body. It informs the compiler about the function's existence and how it can be called.

Function Definition: Provides the actual implementation (body) of the function. It includes the function's name, return type, parameter list, and the statements that define what the function does.*/
