#include <stdio.h>

int main() {
    int empNo,hours,payment;
    int count=0,exceed=0;

    while(true) {
        printf("Enter Employee No.: ");
        scanf("%d",&empNo);
        if(empNo==-999){
            break;
        }

        count+=1;
        payment = 0;

        printf("Enter No. of Hours: ");
        scanf("%d",&hours);

        if(hours<=40) {
            payment+=hours*150;
        }else {
            payment+=40*150+(hours-40)*200;
        }

        if(payment>4000) {
            exceed+=1;
        }

        printf("-------------------------\n");
        printf("Employee No.: %d\n",empNo);
        printf("Over Time Payment: %d\n",payment);
        printf("-------------------------\n");
        printf("-------------------------\n");
    }


    printf("-------------------------------------\n");
    printf("Total No. of Employees: %d\n",count);
    printf("No. of Employees (Over Time Payment > Rs.4000): %d\n",exceed);
    printf("Percentage of Employees (Over Time Payment > Rs.4000): %.2f\n",(float)exceed/count *100);
    printf("-------------------------------------\n");
}
