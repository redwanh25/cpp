#include<stdio.h>
#include<string.h>

struct redwan
{
    char first_name[100],last_name[100],username[100],password[100];
    char ck[100];
    struct birthday
    {
        int day,month,year;
    }birth;
    struct SEX
    {
        char ch;
    }sex;

}user;

void pass(char p[100])
{
    char c;
    int i=0;
    while(1){
    c=getch();
    if(c==13)
        break;
    putchar('*');
    p[i++]=c;
    }
    p[i]='\0';

}

int main()
{
    printf("enter your first name: ");
    scanf("%s",user.first_name);
    printf("\nenter your last name: ");
    scanf("%s",user.last_name);
    printf("\nenter your user name: ");
    scanf("%s",user.username);
    printf("\nenter your password: ");
    pass(user.password);
    what:
    printf("\nenter your retype password: ");
    pass(user.ck);
    if(strcmp(user.password,user.ck)!=0){
        printf("\npassword do not match");
        goto what;
    }
    printf("\nenter your birth day:");
    printf("\nday: ");
    scanf("%d",&user.birth.day);
    printf("\nmonth: ");
    scanf("%d",&user.birth.month);
    printf("\nyear: ");
    scanf("%d",&user.birth.year);
    printf("\nenter your sex (if male press M / if femail press F): ");
    scanf(" %c",&user.sex.ch);
    printf("\n\n\n%s",user.password);
    return 0;
}
