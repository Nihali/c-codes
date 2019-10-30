#include <stdio.h>

//declaring a function square above the main function
int square(int num);

int main() {

    int result,n;
    n=6;

    for(int i=1;i<n;i++)
    printf("The result is: %d\n",square(i));

	return 0;
}

int square(int num)
{
    int y;

    y=num*num;
    return(y);
}
