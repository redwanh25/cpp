#include<stdio.h>
#include<string.h>
int i,n;
struct redwan
{
    char name[20];
    int id;
    double sgpa;
};
void func(struct redwan st[n]);
int main()
{
   scanf("%d",&n);
   struct redwan st[n];
   for(i=0; i<n; i++)
    scanf("%s %d %lf",st[i].name, &st[i].id, &st[i].sgpa);
    printf("\n");
   func(st);
   return 0;
}
void func(struct redwan st[n])
{
    for(i=0; i<n; i++)
    printf("%s %d %.2lf\n",st[i].name,st[i].id,st[i].sgpa);
}
