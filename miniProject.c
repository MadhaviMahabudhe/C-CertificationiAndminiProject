#include<stdio.h>
#include<conio.h>
int main()
{
float ins_amt,c_amt=0.00,s_amt=0.00,n_amt=0.00;
char name[30];
int age;
//clrscr();
printf("\n Name of the person :->");
scanf("%s",name);
printf("\n Age of the person :->");
scanf("%d",&age);
printf("\n Insurance /Claim amount :->");
scanf("%f",&ins_amt);
//clrscr();
printf("\n ---------------------------------------------------");
printf("\n Person's Name         Age           Insurance Amt");
printf("\n ---------------------------------------------------");
printf("\n %s\t\t%d\t\t%0.3f",name,age,ins_amt);
printf("\n ---------------------------------------------------");
c_amt=c_amt+0.09*ins_amt;
printf("\n CGST 9      %0.3f",c_amt);
printf("\n");
s_amt=s_amt+0.09*ins_amt;
printf("\n SGST 9      %0.3f",s_amt);
printf("\n");
printf("\n ---------------------------------------------------");
n_amt=ins_amt+c_amt+s_amt;
printf("\n Net Amount= %0.3f",n_amt);
printf("\n ---------------------------------------------------");
//getch();
return 0;
}