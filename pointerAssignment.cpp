#include <iostream>

int Add(int *a, int *b){
    int sum = *a + *b;
    return sum;
};    //Add two numbers and return the sum

void AddVal(int *a, int *b, int *result){
    *result = *a + *b;
}; //Add two numbers and return the sum through the third pointer argument

void Swap(int *a, int *b){
    int x = *a;
    *a = *b;
    *b = x;
}; //Swap the value of two integers

void Factorial(int *a, int *result){
    int x = *a;
    if(x<=0)return;
    *result = 1;
    for(int i=x; i!=1; i--){
        *result = *result * i;
    }
}; //Generate the factorial of a number and return that through the second pointer argument

int main() {
    int x,y;
    std::cout<<"Enter values for X and Y : ";
    std::cin>>x>>y;
    std::cout<<std::endl;

    std::cout<<"Add of X and Y : "<<Add(&x,&y)<<std::endl;
    
    int result{};
    AddVal(&x, &y, &result);
    std::cout<<"returned sum : "<<result<<std::endl;
    
    Swap(&x, &y);
    std::cout<<"After swap of X & Y, \nX =  "<<x<<"\ny = "<<y<<std::endl;

    Factorial(&x, &result);

    std::cout<<"Factorial of X after swap : "<<result<<"\n";

    return 0;
}
