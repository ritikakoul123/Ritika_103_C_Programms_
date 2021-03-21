#include <stdio.h> // Pro-Prossive to include standard input output header files funtions
int main()
{
   int a, i, c=0; // Variable Declration 
 	printf("Enter number to check prime number or not"); // input from user 
    scanf("%d",&a);
    i=2;
    while( i<=a/2)
    {
        // check for non prime number
        if(a%i==0)
        {
            c=1;
            break;
        }
        i++;
    }
 
    if (c==0)
        printf("%d is a prime number.",a); // Print Prime if its true 
    else
        printf("%d is not a prime number.",a); // Print Not Prime if its False
 
    return 0;
    // End of Program 
}
 

