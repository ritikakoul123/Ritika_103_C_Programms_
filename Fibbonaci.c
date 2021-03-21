#include <stdio.h> // Pre-Processive to Include standard input and output header files funtions
int main()  // Start of main body 
{
    int i, n, t1 = 0, t2 = 1, nextTerm; // Variable Declaration
    printf("Enter the number of terms: "); // Input from user 
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
} // End of Body 
