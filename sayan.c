#include<stdio.h>
#include<conio.h>
void main(){
    char str[100];
    char ch;
    int n;
    int i,a,c;
    do{
    printf("\n.................................................");
    printf("\n|                                                |");
    printf("\n................Question Answer Game..............");
    printf("\nEnter The Participate Name--");
    scanf("%s",str);
    printf("\nEnter The Praticipate Id--");
   scanf("%d",&n);
   switch (n)
   {
   case 1324:
   printf("\nAnswer The Folowing Qestiions...");
   printf("\nWhat Data Type Are Used For Decimal Number?");
   printf("\n1.Int     \t2.char");
   printf("\n2.float    \t3.Double");
   printf("\nAns--");
 
    
scanf("%d",&i);

if(i==1)
{
printf("\nThe Ans is True");
printf("\n Your Given Marks Is   %d",i);
}
else
{
printf("\nWrong Ans.");
}
printf("\nwhat Is The Exteceon of Word File?");
printf("\n1. .docx(2007)  \t2. .txt ");
printf("\n3. .ppt          \t4. .xlx");
printf("\nAns--");

    scanf("%d",&a);
    if(a==1){
        printf("\nThe Ans Is True");
        printf("\n Your Given Marks Is  %d",a);


    }
    else{
        printf("\nWrong");
    }
    c=a+i;
printf("\n Your Total Marks Is %d",c);
break;
default:
printf("\n Invalid You are Not A participant ");
   }
printf("\n Do You Want To Continue---- y or n");
ch=getch();
    }
while(ch=='y' || ch=='Y');
getch();
}