#include <stdio.h>
int main()
{
 float avgspeed, distravelled,timetakn;
 printf("Enter the Distance Travelled: ");
 scanf("%f",&distravelled);
 printf("Enter the Time Taken: ");
 scanf("%f",&timetakn);
 avgspeed=distravelled/timetakn;
 printf("The Average Speed Taken is %f \n",avgspeed);
}
