#include<stdio.h>


    //function declaration for factorial
    int factorial(int num)
    {

    if(num==1)
    return(1);
    else
    return(num*factorial(num-1));
}
    int main(){

    int result, x=5;

    result=factorial(x);
    printf("The factorial of number is: %d",result);


}

