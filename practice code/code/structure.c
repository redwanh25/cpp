#include<stdio.h>
#include<string.h>
struct redwan
{
    char name[100];
    int id;
    double sgpa;
}student;
int main()
{
///    struct redwan student;
      strcpy(student.name,"redwan");
      student.id= 8557;
      student.sgpa= 3.94;

      printf("%s\n",student.name);
      printf("%d\n",student.id);
      printf("%.2lf\n",student.sgpa);
    return 0;
}
