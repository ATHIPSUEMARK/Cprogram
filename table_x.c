#include<stdio.h>
 
int main()
{
    int number, i;
    printf(" *** Multiplication Table ***\n");
    printf("Enter a number (2-100) : ");
    scanf("%d", &number);
     if(number>=2 && number<=100){
    for(i = 1; i <= 12; i++)
    {
        printf("%4d x %-2d = %-3d\n", number, i, number*i);
    }
     }
     else{
         printf(" - - -  Out of Range  - - -");
     }
    return 0;
}
