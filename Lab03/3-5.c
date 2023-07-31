 #include<stdio.h>
 int main()
 {
int n1,n2,ans;
printf("enter n1: ");
scanf("%d",&n1);
printf("enter n2: ");
scanf("%d",&n2);
ans=n1%n2;
if(ans==0)
printf("First number is a multiple of second number %d ",ans);
else
printf("First number is not a multiple of second number %d ",ans);
}
