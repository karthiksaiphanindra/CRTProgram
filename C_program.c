//for finding the max and min vlaues of the interger
#include <stdio.h>
#include <limits.h>
void main()
{
    int a,b;
    a=INT_MAX;
    printf("%d\n",a);
    b=INT_MIN;
    printf("%d",b);
 }
//////////////////////////////////
//for printing the float value 
#include <stdio.h>
void main()
{
    float a=2.56489;
    printf("%f\n",a);
}
///////////////////////////////////////////
//for printing the ascii value of the value 
#include <stdio.h>
#include <limits.h>
void main()
{
    int a=65;
    printf("%c",a);
}
////////////////////////////////////////
//for finding the ascii vlaues of capital case letters
#include <stdio.h>
#include <limits.h>
void main()
{
    int a=65;
    for(a=65;a<=90;a++)
    printf("%c=%d",a,a);
}
/////////////////////////////////////////
//for findinf the ascii values of lower case letters
#include <stdio.h>
#include <limits.h>
void main()
{
    int a=97;
    for(a=97;a<=123;a++)
    printf("%c=%d",a,a);
}
////////////////////////////////////////
#include <stdio.h>
#include <limits.h>
void main()
{
    printf("abcd\fefgh\fijkl\fmnop");
}
///////////////////////////////////
#include <stdio.h>
#include <limits.h>
void main()
{
    printf("abcd\befg");
}
//////////////////////////////////
#include <stdio.h>
#include <limits.h>
void main()
{
    printf("abcd\refgh");
}
/////////////////////////////////
#include <stdio.h>
#include <limits.h>
void main()
{
    printf("abcd\nefgh\nijkl\nmnop");
}
/////////////////////////////////////
//octal of a value 
#include <stdio.h>
void main()
{
    int a=29;
    printf("%o",a);
}
//////////////////////////////
//hexadecilam of a value 
#include <stdio.h>
void main()
{
    int a=29;
    printf("%d",a);
}
////////////////////////////////
//to print the value of the char
#include <stdio.h>
void main()
{
    int a;
   a = printf("hello\n");
    printf("%d",a);
}
///////////////////////////////
#include <stdio.h>
void main()
{
    int a,b,c,d;
   c=scanf("%d%d",&a,&b,&d);
    printf("%d",c);
}
//////////////////////////////
//or operator
#include <stdio.h>
#include <math.h>
void main()
{
    int a=5,b=6,c;
    c=b||a;
    printf("%d",c);
}
/////////////////////////////
//and operator
#include <stdio.h>
#include <math.h>
void main()
{
    int a=5,b=6,c;
    c=b&&a;
    printf("%d",c);
}
/////////////////////////////
//or and operator
#include <stdio.h>
#include <math.h>
void main()
{
    int a=5,b=6,c,d=-7;
    c=b||a&&d;
    printf("%d",c);
}
////////////////////////////
//not operator
#include <stdio.h>
#include <math.h>
void main()
{
    int a=5,c;
    c=!a
    printf("%d",c);
}
////////////////////////////
//realtion operator ==
    #include <stdio.h>
#include <math.h>
void main()
{
    int a=5,b=5,c;
    if(a==b)
    printf("yes");
    else
    printf("no");
}
///////////////////////////
#include <stdio.h>
#include <math.h>
void main()
{
    int a=5,b=6,c;
    if(a=b)
    printf("yes");
    else
    printf("no");
    printf("%d",a);
}
/////////////////////////////
#include <stdio.h>
#include <math.h>
void main()
{
    int a=5,b=6,c;
    if(a)
    printf("yes");
    else
    printf("no");
   printf("%d",a);
}
//////////////////////////////
#include <stdio.h>
#include <math.h>
void main()
{
    int a=5,b=0,c;
    if(a!=b)
    printf("yes");
    else
    printf("no");
   printf("%d",a);
}
///////////////////////////////
#include <stdio.h>
#include <math.h>
void main()
{
    int a=5,b=0,c;
    if(a<b)
    printf("yes");
    else
    printf("no");
   printf("%d",a);
}
//////////////////////////////
#include <stdio.h>
#include <math.h>
void main()
{
    int a=5,b=0,c;
    if(a>b)
    printf("yes");
    else
    printf("no");
   printf("%d",a);
}
/////////////////////////////
#include <stdio.h>

void main()
{
    int c;
    c=20.0/200*200;
    printf("%d",c);
}
////////////////////////////
//Implisite type conversion 
#include <stdio.h>

void main()
{
    int x=10;
    char y='a';
    x=x+y;
   float  z= x+1.0;
    printf("x=%d,z=%f",x,z);
}
///////////////////////////////
//Explisite type conversion
#include <stdio.h>

void main()
{
    double x=1.2;
    int sum;
    sum=(int)x+1;
    printf("sum=%d",sum);
}
//////////////////////////////
#include <stdio.h>

void main()
{
    int c;
    c=(float)20.0/200*200;
    printf("%d",c);
}
/////////////////////////////
#include <stdio.h>

void main()
{
    char c;
    printf("enter the character");
    scanf("%c",&c);
    if (c>='A'&&c<='z')
    printf("c = %c,it is uppercase",c);
    else if (c>='a'&&c<='z')
    printf("c = %c,it is lower case",c);
    else if (c>=48&&c<=57)
    printf("c = %c,it is number",c);
    else
    printf("it is invalid");
}
///////////////////////////////
#include <stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("sunday");
        break;
        case 2: printf("monday");
        break;
        case 3: printf("tuesday");
        break;
        case 4: printf("wednesday");
        break;
        case 5: printf("thursday");
        break;
        case 6: printf("friday");
        break;
        case 7: printf("saturday");
        break;
        default: printf("invalid input");
    }
}
/////////////////////////////////////
#include <stdio.h>

void main()
{
   int a,b;
   char ch;
   printf ("enter a,b values");
   scanf ("%d%d",&a,&b);
   printf("the operation to perform");
   scanf(" %c",&ch);
   switch (ch)
   {
       case '+' : printf (" %d",a+b);
       break; 
       case '-' : printf(" %d",a-b);
       break;
       case '/' : printf(" %d",a/b);
       break;
       case '%' :printf(" %d",a%b);
       break;
       case '*':printf(" %d",a*b);
       break;
       default : printf("invalid i/p");
       
   }
}
////////////////////////////////
//while
#include <stdio.h>

void main()
{
   int a=10;
   while(a>=1)
   {
   printf("%d\n",a);
   a--;
   }
}
///////////////////////////
#include <stdio.h>

void main()
{
   int a=0,n;
   scanf("%d",&n);
   while(a<=n)
   {
   printf("%d\n",a);
   a+=2;
   }
}
////////////////////
#include <stdio.h>

void main()
{
   int a=1,n;
   scanf("%d",&n);
   while(a<=n)
   {
   printf("%d\n",a);
   a+=2;
   }
}
/////////////////////////
//do wile
#include <stdio.h>

void main()
{
   int i;
   i=15;
   do
   {
   printf("%d\n",i);
   i++;
   }while(i<=10);
}
///////////////////////////
//
#include <stdio.h>

void main()
{
   int i;
   for(i=99;i>=1;i-=2)
   printf("%d\n",i);
}
///////////////////////////
#include <stdio.h>

void main()
{
  int a,b;
  scanf("%d",&a);
  while(a!=0)
  {
  b=a%10;
  printf("%d",b);
  a=a/10;
  }
}
//////////////////////////
#include <stdio.h>

void main()
{
  int a,b,sum;
  scanf("%d",&a);
  while(a!=0)
  {
  b=a%10;
  sum=sum810+b;
  a=a/10;
  }
  printf("%d",sum);
}
////////////////////////////////////

