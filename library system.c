#include<stdio.h>
int main () {
    int bookID,dueDate,returnDate,daysOverdue,fineRate,fineAmount;
    
    printf("Book ID");
    scanf("%d",&bookID);
    
    printf("Due Date");
    scanf("%d",&dueDate);
    
    printf("Return Date");
    scanf("%d",&returnDate);
     
    daysOverdue=returnDate-dueDate;
    if (daysOverdue<=0) {
        fineRate=0;
        daysOverdue=0;
        fineAmount=0;
    }
    else if(daysOverdue<=7) {
        fineRate=20;
        fineAmount=fineRate*daysOverdue;
    }
    else if(daysOverdue<=14) {
        fineRate=50;
        fineAmount=fineRate*daysOverdue;
    }
    else {
        fineRate=100;
        fineAmount=fineRate*daysOverdue;
    }
    printf("bookID:%d\n",bookID);
    printf("dueDate:%d\n",dueDate);
    printf("returnDate:%d\n",returnDate);
    printf("daysOverdue:%d\n",daysOverdue);
    printf("fineRate:%d\n",fineRate);
    printf("fineAmount:%d\n",fineAmount);
    
    return 0;

    
}