#include<stdio.h>   // Pre-Processive to include standard input and output header files   
#include<stdlib.h>   // Pre-Processive to include standard Library header files  
int main(){  
int a[10],n,i;      
printf("Enter the number to convert: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
   a[i]=n%2;     // Logic
      n=n/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
  printf("%d",a[i]);    
}    
return 0;  
}  
