//Tutorial No.: 7
//Emmanuel Binoy George
//Roll No.: 30

//Question 1: Countdown

/*#include <stdio.h>

int main()
{
    int num = 10;
    while (num >= 1)
    {
        printf("%d\n",num);
        --num;
    }
    return 0;
}*/

//Question 2: Sum of Natural numbers

/*#include <stdio.h>
int main()
{
    int num ,i=1,sum=0;
    printf("Enter the end no:");
    scanf("%d",&num);
    while (i<=num)
    {
        sum += i;
        ++i;
    }
    printf("Sum of first %d natural numbers is %d.",num,sum);
    return 0;
}*/


//Question 3: Factorial

/*#include <stdio.h>
int main()
{
    int num,i=1,factorial=1;
    printf("Enter a no:");
    scanf("%d",&num);
    while (i<=num)
    {       
        factorial *= i;
        ++i;      
    }
    printf("%d! is = %d.",num,factorial);
    return 0;
}*/

//Question 4: Even Numbers in a range

/*#include <stdio.h>
int main()
{
    int i=1,j=20;
    printf("\nEven numbers in range of 1-20 are:\n");
    while (i<j)
    {       
        if (i%2==0)printf("%d ",i);
        ++i;      
    }
    return 0;
}*/


//Question 5: Multiplication table

/*#include <stdio.h>
int main()
{
    int i=1,num;
    printf("\nEnter no:");
    scanf("%d",&num);
    while (i<=10)
    {       
        printf("%d * %d = %d\n",num,i,(num*i));
        ++i;      
    }
    return 0;
}*/

//Question 6: Reversing the entered number

#include <stdio.h>
int main()
{
    int num,reverse=0;
    printf("Enter a no:");
    scanf("%d",&num);
    printf("\nNumber before reversing= %d",num);
    while (num>0)
    {       
        int i = num%10;
        reverse = reverse*10 + i;
        num /=10;      
    }
    printf("\nNumber after reversing= %d",reverse);
    return 0;
}