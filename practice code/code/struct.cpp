#include<stdio.h>
struct dis
{
    int f;
    int i;
};
void pri(struct dis *d)
{
    (*d).f++;
    (*d).i++;
    printf("%d %d\n",(*d).f, (*d).i);
}
int main()
{
    struct dis d={3,5};
    pri(&d);
    printf("%d %d\n",d.f, d.i);
    return 0;
}
