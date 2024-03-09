//Tutorial No.: 5
//Emmanuel Binoy George
//Roll No.:30

// Question 1: Voting Eligibility

/*#include <stdio.h>
int main ()
{
    int age;
    printf("Enter your Age: ");
    scanf("%d", &age);
    if (age >=18)
        printf("\nCongratulations! You are eligible to cast your vote.");
    else
        printf("\nSorry, you are not eligible to vote at your age.");        
    return 0;    
}*/
 
 //QUestion 2: To find the youngest amongst any 3

/*#include <stdio.h>
int main ()
{
    int Ram, Shyam, Ajay;
    printf("Enter Age of Ram, Shyam, and Ajay(age1 age2 age3): ");
    scanf("%d%d%d", &Ram,&Shyam,&Ajay);
    if ((Ram<=Shyam) && (Ram<=Ajay))
       printf("The youngest of the three is Ram(%d years).", Ram);
    else if (Shyam<=Ram &&  Shyam<=Ajay)
        printf("The youngest of the three is Shyam(%d years).", Shyam);
    else
        printf("The youngest of the three is Ajay(%d years).", Ajay);    
    return 0;       
}*/

 //Question 3: To check whether the entered nnumber is positive, negative or zero.

/*#include <stdio.h>
int main ()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num >0)
        printf("\n%d is positive.",num);
    else if(num<0)
        printf("\n%d is negative.",num); 
    else
        printf("\n%d is zero.",num);  
    return 0;    
}*/

//Question 4: Printing mark percentage rank of a student for 3 subjects

/*#include <stdio.h>
int main()
{
    int rollNo; char Name[15]; 
    float m1,m2,m3;
    printf("Enter student details--->\n");
    printf("Enter the Roll No.:",rollno);
    scanf("%d",&rollno);
    printf("Enter student name:");
    scanf(" %s",Name);
    printf("Enter Marks in three Subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);
    float totalPer =(m1+m2+m3)/3;
    printf("\nStudent Details:\nRollNo:%d\nName:%s\nTotal percentage:%.2f\n",rollno,Name,totalPer);
    if (totalPer >= 75)
        printf("\nRemarks:First Class with Distibction.");
    else if(totalPer>=60 && totalPer<75)
        printf("\nRemarks:First Class.");
    else
        printf("\nRemarks:Second Class");
    return 0;
}*/

//Question 5: Check whether the entered number below 100 is odd or even

 #include <stdio.h>
int main ()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num<100){
        if(num%2==0)
            printf("%d is a even no.",num);
        else
            printf("%d is a odd no.",num);
    }
    else
        printf("it is a positive number greater than 100");
    return 0;
}