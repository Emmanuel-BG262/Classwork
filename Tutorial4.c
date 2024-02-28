//Tutorial No.: 4
//Emmanuel Binoy George
//Roll No.:30

//Adding any two complex numbers

#include <stdio.h>
int main (){
    float r1,i1,r2,i2;
    printf("Enter the real and imaginary part of first complex number:(a b):");
    scanf("%f%f",&r1,&i1);
    printf("Enter the real and imaginary part of second complex number:(a b):");
    scanf("%f%f",&r2,&i2);
    float real = r1+r2; float imag = i1+i2;
    printf("\n%.1f + i%.1f  \n%.1f + i%.1f  +\n--------------\n= %.1f + i%.1f\n ",r1,i1,r2,i2,real,imag);
    return 0;
}


//To find simple interest

/*#include <stdio.h>
int main (){
    float p,t,r;
    printf("Enter the Principal Amount, Time Period and the Rate of Interest:(p t r):");
    scanf("%f%f%f",&p,&t,&r);
    float si = (p*t*r)/100;
    printf("Simple Interest = %.3f",si);
    return 0;
}*/


//To find compound interest

/*#include <stdio.h>
#include <math.h>

int main() {
    float p,t,r;
    printf("Enter the Principal Amount, Time Period and the Rate of Interest:(p t r):");
    scanf("%f%f%f",&p,&t,&r);
    float CI = p * (pow((1 + r / 100), t));
    printf("Compound Interest is %.2f", CI);
    return 0;
}*/


//To find the Solutions of a Quatratic Equation

/*#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, discriminant, r1, r2, real, img;
    printf("Enter the values for a b and c(ax^2+bx+c):");scanf("%f%f%f",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        r1 = (-b + sqrt(discriminant))/(2*a);
        r2 = (-b - sqrt(discriminant))/(2*a);
        printf("Roots are real and different.\nRoot 1 = %.2f\nRoot 2 = %.2f\n",r1,r2);
    }
    else if (discriminant == 0) {
        r1 = r2 = -b/(2*a);
        printf("Roots are real and the same.\nRoot 1 = Root 2 = %.2f\n",r1);
    }
    else {
        real = -b/(2*a);
        img = sqrt(-discriminant)/(2*a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + i%.2f\n", real, img);
        printf("Root 2 = %.2f - i%.2f\n", real, img);
    }
    return 0;
}*/