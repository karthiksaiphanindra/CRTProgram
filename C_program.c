for finding the max and min vlaues of the interger
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
for printing the float value 
#include <stdio.h>
void main()
{
    float a=2.56489;
    printf("%f\n",a);
}
///////////////////////////////////////////
for printing the ascii value of the value 
#include <stdio.h>
#include <limits.h>
void main()
{
    int a=65;
    printf("%c",a);
}
////////////////////////////////////////
for finding the ascii vlaues of capital case letters
#include <stdio.h>
#include <limits.h>
void main()
{
    int a=65;
    for(a=65;a<=90;a++)
    printf("%c=%d",a,a);
}
/////////////////////////////////////////
for findinf the ascii values of lower case letters
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
octal of a value 
#include <stdio.h>
void main()
{
    int a=29;
    printf("%o",a);
}
//////////////////////////////
hexadecilam of a value 
#include <stdio.h>
void main()
{
    int a=29;
    printf("%d",a);
}
////////////////////////////////
to print the value of the char
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
or operator
#include <stdio.h>
#include <math.h>
void main()
{
    int a=5,b=6,c;
    c=b||a;
    printf("%d",c);
}
/////////////////////////////
and operator
#include <stdio.h>
#include <math.h>
void main()
{
    int a=5,b=6,c;
    c=b&&a;
    printf("%d",c);
}
/////////////////////////////
or and operator
#include <stdio.h>
#include <math.h>
void main()
{
    int a=5,b=6,c,d=-7;
    c=b||a&&d;
    printf("%d",c);
}
////////////////////////////
not operator
#include <stdio.h>
#include <math.h>
void main()
{
    int a=5,c;
    c=!a
    printf("%d",c);
}
////////////////////////////
realtion operator ==
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
