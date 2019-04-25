#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int n;
printf("Enter your Number:");
scanf("%d",&n);
do
{
    printf("\nDo you want to enter one more number(y/n):");
scanf("%c",&ch);
printf("Enter your Number:");
scanf("%d",&n);
if(n%2!=0)
printf("Entered number is odd");
else
printf("Entered number is even");


}
while(ch=='y');

}
