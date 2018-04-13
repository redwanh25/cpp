#include<iostream>
#include<cstring>
using namespace std;

struct red
{
    char name[20];
    int balance;
};

struct red func(struct red r, struct red k)
{
    if(r.balance > k.balance){
        return r;
    }
    else{
        return k;
    }
};

int main()
{
    struct red r,k,big;
    strcpy(r.name,"redwan");
    strcpy(k.name,"email");
    r.balance=1213;
    k.balance=2445;
    big=func(r,k);
    cout<<big.name<<endl;   /// cout<<func(r,k).name<<endl;
    return 0;
}
