#include<iostream>
using namespace std;
int a[101],t=-1;
void push(int x)
{
    if(t == 100){
        cout<< "stack overflow" <<endl;
        return;
    }
    a[++t] = x;
}
void pop()
{
    if(t==-1){
        cout<<"empty"<<endl;
        return;
    }
    t--;
}
void top()
{
    printf("%d\n",a[t]);
}
void print()
{
    for(int i=0; i<=t; i++){
        cout<< a[i] <<" ";
    }
    cout<<endl;
}
int main()
{
  //  push(2);
  //  push(3);
    pop();
    push(2);
    push(3);
    top();
    pop();
    top();
    print();
    return 0;
}
