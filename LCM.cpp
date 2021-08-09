//Hello all, in this github edition am writing a C program to calculate the lcm of two numbers
//Samuelrgb29@github.com

//C PROGRAM to find the LCM of two numbers

//LCM of two numbers is the smallest number that is a multiple of both numbers
//LCM is always greater than or equal to the maximum of the given two numbers

/*The code i've shared is for an endless while loop which will iterate continuosly
and only break if the modulus of both numbers is zero 
that is if the number achieved leaves no remainder*/

#include <stdio.h>
int main()
 {
    int a, b;
    printf("Enter two numbers, each on a new line: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    int lcm = (a > b) ? a : b;
    
    //loop until divisible by both 
    while(1){
        if(lcm%a==0 && lcm%b==0)
            break;
        lcm++;
    }
    
    //output the LCM
    printf("LCM of %d and %d is: %d", a, b, lcm);
    return 0;
}
  
