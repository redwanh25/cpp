#include<stdio.h>
#include<string.h>

void id();
void name();
void mark();
int i=0,j,k,l,n;

struct redwan
{
    char id[50],name[100];
    double mark;
}student[10000],temp;

void id()
{
    for(j=0; j<i; j++){
        for(k=j+0; k<i; k++){
            if(strcmp(student[j].id,student[k].id)>0){
                strcpy(temp.id,student[j].id);
                strcpy(temp.name,student[j].name);
                temp.mark=student[j].mark;

                strcpy(student[j].id,student[k].id);
                strcpy(student[j].name,student[k].name);
                student[j].mark=student[k].mark;

                strcpy(student[k].id,temp.id);
                strcpy(student[k].name,temp.name);
                student[k].mark=temp.mark;
            }
        }
    }
    for(l=0; l<i; l++)
    printf("%s %s %.2lf\n",student[l].id,student[l].name,student[l].mark);
}

void name()
{
    for(j=0; j<i; j++){
        for(k=j+0; k<i; k++){
            if(strcmp(student[j].name,student[k].name)>0){
                strcpy(temp.id,student[j].id);
                strcpy(temp.name,student[j].name);
                temp.mark=student[j].mark;

                strcpy(student[j].id,student[k].id);
                strcpy(student[j].name,student[k].name);
                student[j].mark=student[k].mark;

                strcpy(student[k].id,temp.id);
                strcpy(student[k].name,temp.name);
                student[k].mark=temp.mark;
            }
        }
    }
    for(l=0; l<i; l++)
    printf("%s %s %.2lf\n",student[l].id,student[l].name,student[l].mark);
}

void mark()
{
    for(j=0; j<i; j++){
        for(k=j+0; k<i; k++){
            if(student[j].mark<student[k].mark){
                strcpy(temp.id,student[j].id);
                strcpy(temp.name,student[j].name);
                temp.mark=student[j].mark;

                strcpy(student[j].id,student[k].id);
                strcpy(student[j].name,student[k].name);
                student[j].mark=student[k].mark;

                strcpy(student[k].id,temp.id);
                strcpy(student[k].name,temp.name);
                student[k].mark=temp.mark;
            }
        }
    }
    for(l=0; l<i; l++)
    printf("%s %s %.2lf\n",student[l].id,student[l].name,student[l].mark);
}

int main()
{
    printf("***********  INPUT  ************\n\n");
    while(scanf("%s %s %lf",student[i].id, student[i].name, &student[i].mark)!=EOF){
        i++;
    }
    printf("\n");
    printf("what type you want to short...?\npress \"1\" for id short.\npress \"2\" for name short.\n");
    printf("press \"3\" for mark short.\nplease inter the key: ");
    scanf("%d",&n);
    printf("\n\n***********  OUTPUT  ************\n\n");
    if(n==1)
        id();
    else if(n==2)
        name();
    else if(n==3)
        mark();
    return 0;
}
