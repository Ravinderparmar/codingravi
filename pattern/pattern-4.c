     *
    **
   *** 
  ****
 *****


#include<stdio.h>
#include<conio.h>
main()
{
    int i,r,c;
    for(i=1;i<=5;i++)
    {
        for(r=1;r<=(5-i);r++)
        {printf(" ");}
        for(c=1;c<=i;c++)
        {printf("*");}
        printf("\n");
    }
}
