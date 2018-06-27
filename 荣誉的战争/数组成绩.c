#include "stdio.h"
void main() 
{   
int i,j; 
float a[11],t; 
for(i=0;i<10;i++) 
{     
printf("第%d个学生的成绩:\n",i+1);
scanf("%f",&a[i]);
   }        
for(i=0;i<10;i++)
  {  
   for(j=0;j<10-i-1;j++)  
   {         
 if(a[j]<a[j+1])   
  {     
   t=a[j];
  a[j]=a[j+1]; 
 a[j+1]=t;  
}   
  }
}   
  for(i=0;i<10;i++) 
 printf("%g ",a[i]); 
 printf("\n");   
  printf("插入学生的成绩:\n"); 
    scanf("%f",&t); 
   if(t<a[9]) a[10]=t; 
   else if(t>a[0])  
  {   
   for(i=9;i>=0;i--)  
   a[i+1]=a[i];  
    a[0]=t;    
   }   
 else  
  {   
   for(i=9;i>=1;i--) 
  {
  a[i+1]=a[i]; 
 if(a[i]<=t && a[i-1]>=t)
         {  
 a[i]=t;  
 break;
 }  
   } 
   } 
 for(i=0;i<11;i++) 
   printf("%g ",a[i]); 
    printf("\n");  
 for(i=10;i>=0;i--) 
printf("%g ",a[i]); 
printf("\n"); 
}