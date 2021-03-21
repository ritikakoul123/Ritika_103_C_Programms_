#include <stdio.h> // Pre-Processive to include standard input and output header files 
int main() {
    int num;
    printf("Enter an integer: "); // Input from user 
    scanf("%d", &num);

    // True if num is perfectly divisible by 2
    if(num % 2 == 0) // Logic for even odd 
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}


