#include<stdio.h> // Pre-Procssive to include standard input output header files funtions 
  
int main() // Main body 
{
    int a[20],i,x,n; // Variable Declaration 
    printf("How many elements?"); // Input from user 
    scanf("%d",&n);
     
    printf("Enter array elements:n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("nEnter element to search:");
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        printf("Element found at index %d",i);// Prinitng  result 
    else
        printf("Element not found");
  
    return 0;
}
  // End of body 
