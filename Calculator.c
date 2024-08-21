#include<stdio.h>
#include<math.h>
void print_menu();
double division(double,double);
double modulus(int,int);
int main()
{
    int choice;
    double first,second,result;
    while(1){
   print_menu();
   scanf("%d",&choice);
   if(choice==7)
   {
       break;
   }
   if(choice<1 || choice>7)
   {
       fprintf(stderr,"\nInvalid Menu Choice\n");
       continue;
   }
       printf("\nEnter first number:");
       scanf("%lf",&first);
       printf("\nEnter second number:");
       scanf("%lf",&second);

       switch(choice)
       {
       case 1:
        result=first+second;
        break;
       case 2:
        result=first-second;
        break;
       case 3:
        result=first*second;
        break;
       case 4:
        result=division(first,second);
        break;
       case 5:
        result=modulus(first,second);
        break;
       case 6:
        result=pow(first,second);
        break;
       default:
        break;
       }
       if(!isnan(result)){
       printf("\nResult is:%.2lf\n",result);
       }
    }
    return 0;
}
void print_menu()
{
    printf("\n***Welcome to Simple Calculator***\n");
   printf("\nChoose one of the following options:\n");
   printf("1.Add\n");
   printf("2.Subtract\n");
   printf("3.Multiply\n");
   printf("4.Divide\n");
   printf("5.Modulus\n");
   printf("6.Power\n");
   printf("7.Exit\n");
   printf("\nEnter your choice:");
}
double division(double a,double b)
{
    if(b==0)
    {
        fprintf(stderr,"\nInvalid Argument for division\n");
        return NAN;
    }
    else
        return a/b;
}
double modulus(int a,int b)
{
    if(b==0)
    {
        fprintf(stderr,"\nInvalid Argument for modulus\n");
        return NAN;
    }
    else
        return a%b;
}
