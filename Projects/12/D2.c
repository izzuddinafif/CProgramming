#include <stdio.h>
int r, q = 10;
int go_crazy(int *, int *);
main()
{
int *ptr1 = &q;
int *ptr2 = &q;
r = go_crazy(ptr2, ptr1);
printf("q = %d, r = %d, *ptr1 = %d, *ptr2 = %d\n",
q, r,*ptr1,*ptr2);
ptr1 = &r;
q = go_crazy(ptr1, ptr2);
r=r*5;
q = q + r;
printf("q = %d, r = %d, *ptr1 = %d, *ptr2 = %d\n",
q, r,*ptr1,*ptr2);
}
int go_crazy(int *p1, int *p2)
{
int x = 5;
r = 12;
*p2 = *p1 * 2;
p1 = &x;
return *p1 * 3;
}