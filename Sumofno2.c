#include<stdio.h>
void main ()
{
int sumofno(int);
printf("%d",sumofno(9));

}
int sumofno(int n)
{
 return ((n)?(n+sumofno(n-1)):0);
}

