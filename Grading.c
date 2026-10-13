#include<stdio.h>
int main(){
    for(int i=0; i<5; i++){
        int total=0, marks;
        printf("Enter your marks:");
        scanf("%d",&marks);
        total=total+marks; }
    float avg;
    avg=total/5.0;
    float p;
    p=avg*100;
    if(p>0.0 && p<60.0){printf("Your grade is F");}
    else if(p>=60.0 && p<70.0){printf("Your grade is C");}
    else if(p>=70.0 && p<80.0){printf("Your grade is B");}
    else if(p>=80.0 && p<90.0){printf("Your grade is A");}
    else if(p>=90.0 && p<=100.0){printf("Your grade is A+");}
    else{printf("Invalid marks");}
    return 0;}