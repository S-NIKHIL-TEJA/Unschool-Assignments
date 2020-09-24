#include<stdio.h>
#include<conio.h>
int main()
{
int a;
int b;
int sum,diff,prod,quotient,rem;
printf("Enter first number: ");
scanf("%d",&a);
printf("Enter second number: ");
scanf("%d",&b);

sum=a+b;
diff=a-b;
prod=a*b;
quotient=a/b;
rem=a%b;
printf("Sum of %d and %d is %d \n",a ,b,sum);
printf("Difference of %d and %d is %d \n",a ,b,diff);
printf("Product of %d and %d is %d \n",a ,b,prod);
printf("On dividing %d by %d quotientis %d \n",a ,b,quotient);
printf("On dividing %d by %d remainder is %d \n",a ,b,rem);

return 0;
}
