#include<stdio.h>

int main () {
    int age,loan;
    age=21;
    loan=21000;
    
    printf("Enter your age\n");
    scanf("%d",&age);
    
    printf("Enter loan\n");
    scanf("%d",&loan);
    
    if(age>=21 && loan>=21000) {
        printf("Congratulations you qualify for the loan\n");
    } {
        printf("Unfortunately we are unable to offer you a loan at this time\n"); 
    }
    printf("%d\n");
    
    return 0;
}