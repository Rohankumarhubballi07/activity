/**
 * @file function.c
 * @author Rohan (rohankumarhubbali@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>

int mychar (char str[]);

 int main()
 {
   char str[100];         
   int sum=0;
   printf("\nEnter any Name of a string:\n ");
   scanf("%s",str);
   printf("\nASCII values of each characters of given string:\n ");
   sum = mychar(str);
   printf("\nsum is %d\n",sum);
   return 0;
 }
 int mychar (char str[100])      // function 
 {
   int i=0,sum=0;
    while(str[i]>0)
    {
     printf("%d",str[i++]);
      sum = sum+(int)str[i];   
   }
   return sum;
}



  

  
