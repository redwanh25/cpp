#include<stdio.h>
int main()
{
    int pin,key,balance=1000,withdraw,deposit;
    char c;
    printf("ENTER YOUR SECRET PIN NUMBER: ");
    scanf("%d",&pin);
    do{
        printf("*******Welcome to REDWAN Servise*******\n");
        printf("1.Check Balance\n");
        printf("2.Withdraw Cash\n");
        printf("3.Deposit Cash\n");
        printf("4.Quit\n");
        printf("***************************************\n\n");
        printf("Enter your choice: ");
        scanf("%d",&key);
        if(key==1){
            printf("YOUR BALANCE IN TAKA: %d\n\n",balance);
        }
        else if(key==2){
            printf("ENTER THE AMOUNT TO WITHDRAW: ");
            scanf("%d",&withdraw);
            while(0>=withdraw){
                printf("SORRY. PLEASE ENTER THE AMOUNT TO WITHDRAW AGAIN: ");
                scanf("%d",&withdraw);
            }
            while(balance<withdraw){
                printf("SORRY YOUR CURRENT BALANCE IS VERY LOW\n\n");
                printf("ENTER THE AMOUNT TO WITHDRAW: ");
                scanf("%d",&withdraw);
            }
            balance-=withdraw;
            printf("PLEASE COLLECT CASH\n");
            printf("YOUR CURRENT BALANCE IS: %d\n\n",balance);
        }
        else if(key==3){
            printf("ENTER THE AMOUNT TO DEPOSIT: ");
            scanf("%d",&deposit);
            while(0>=deposit){
                printf("SORRY. PLEASE ENTER THE AMOUNT TO DEPOSIT AGAIN: ");
                scanf("%d",&deposit);
            }
            balance+=deposit;
            printf("YOUR BALANCE IS: %d\n\n",balance);
        }
        else if(key==4){
             printf("THANK YOU USING MY BOOTH\n\n");
             return 0;
        }
        printf("DO YOU HAVE TO ANOTHER TRANSCATION ? (y/n): ");
        scanf(" %c",&c);
        while(c!='y' && c!='n'){
            printf("SORRY. DO YOU HAVE TO ANOTHER TRANSCATION ? (y/n): ");
            scanf(" %c",&c);
        }
    }while(c=='y');
    if(c=='n')
        printf("THANK YOU USING MY BOOTH\n");
    return 0;
}
