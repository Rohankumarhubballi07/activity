 #include<stdio.h>

 

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

