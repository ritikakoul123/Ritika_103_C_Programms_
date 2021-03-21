#include<stdio.h> // Pre-Processive to include standard input or output header files functions
int main() // Start Of Main body 
{
int i; // Variable Declaration 
float arr[5]; // declaring Array of size 5 with float data type 

printf("Please enter five numbers:\n "); // Taking input from user 

for (i = 0; i < 5; ++i)
{

    scanf_s("%f", &arr[i]);
}

for (i = 1; i < 5; ++i)
{
    if (arr[0] < arr[i])
        arr[0] = arr[i];
}
printf("Largest element = %.2f", arr[0]); // Printing Result 

return 0;
}// End of Body 
