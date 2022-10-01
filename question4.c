/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/********************************************
C program to find nth Fibonacci number
********************************************/
//2115079
#include<stdio.h>
#include<math.h>
int main(){
    int n;
//Input
    scanf("%d",&n);
//creating a general formula of time complexity 1
    float a1=(1+pow(5,0.5))/2;
    float a2=(1-pow(5,0.5))/2;
    int a3=(pow(a1,n)-pow(a2,n))/(pow(5,0.5));
//Output
    printf("%d",a3);
}