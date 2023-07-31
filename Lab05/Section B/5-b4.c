#include <stdio.h>

int main() {
    int count,empNo,bSal;

    while(true) {
        printf("Enter Employee No.: ");
        scanf("%d",&empNo);
        if(empNo==-999){
            break;
        }
        printf("Enter Basic Salary: ");
        scanf("%d",&bSal);

        if(bSal>=5000) {
            ++count;
        }
    }
    printf("\nNo. of Employees with Salary>=5000: %d\n",count);
}
