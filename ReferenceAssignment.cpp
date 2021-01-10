#include <iostream>

void Add(int a,int b, int &result){
    result = a + b;
};    //Add two numbers and return the result through a reference parameter

void Factorial(int a, int &result){
    int x = a;
    result = 1;
    for(int i = x; i!=1; i--){
        result *= i;
    }
};    //Find factorial of a number and return that through a reference parameter

void Swap(int &a, int &b){
    int x = a;
    a = b;
    b = x;
};  //Swap two numbers through reference arguments

int main() {
    int x,y;
    std::cout<<"Enter values for X and Y : ";
    std::cin>>x>>y;
    std::cout<<std::endl;

    int result{};
    Add(x,y,result);

    std::cout<<"Add of X and Y : "<<result<<std::endl;
    
    Swap(x, y);
    std::cout<<"After swap of X & Y, \nX =  "<<x<<"\ny = "<<y<<std::endl;

    Factorial(x, result);

    std::cout<<"Factorial of X after swap : "<<result<<"\n";

    return 0;
}
