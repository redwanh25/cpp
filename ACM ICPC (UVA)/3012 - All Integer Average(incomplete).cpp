#include<bits/stdc++.h>
using namespace std;
int ln1,ln2,ln,l;
int gcd(int a, int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b, a%b);
}

int prime(int n,int i)
{
    if(i<=sqrt(n)){
        if(n%i==0)
            return 0;
        else
            return prime(n, i+1);
    }
    return 1;
}

void dash(int n, int sum, char s[])
{
    char red1[10000],red2[10000];
    int i=0;
    while(n!=0){
        red1[i++]=(n%10)-'0';
        n/=10;
    }
    red1[i]='\0';
    i=0;
    while(sum!=0){
        red2[i++]=(sum%10)-'0';
        sum/=10;
    }
    red2[i]='\0';
    ln1 = strlen(red1);  //n
    ln2 = strlen(red2);  //sum
    ln1>ln2 ? ln=ln1 : ln=ln2;     // ln= max(ln1,ln2);
    for(i=0; i<ln; i++)
        s[i]='-';
    s[i] = '\0';
}

void space()
{
    l=ln-ln2;
    for(int i=0; i<l; i++)
        cout<<" ";
}

int main()
{
    int n,sum,z=0;
    vector<int> red(100000);
    while(cin>>n && n){
        char s[10000];
        sum=0;
        int x;
        for(int i=0; i<n; i++){
            cin>>red.at(i);
            sum+=red.at(i);
        }
        cout<<"Case "<<++z<<":"<<endl;

        if(sum<0 && sum%n==0)
            cout<<"- "<<-(sum/n)<<endl;

        else if(sum>=0 && sum%n==0)
            cout<<sum/n<<endl;

        else if(sum<n && sum>0){
            if(n%sum==0){
                dash(n/sum, 1, s);
                space();
                cout<<'1'<<endl<<s<<endl<<n/sum<<endl;
            }
            else if(prime(sum,2)==1 || prime(n,2)==1){
                dash(n,sum,s);
                space();
                cout<<sum<<endl<<s<<endl<<n<<endl;
            }
            else{
                x=gcd(n,sum);
                dash(x, n/x, s);
                space();
                cout<<x<<endl<<s<<endl<<n/x<<endl;
            }
        }

        else if(abs(sum)<n && sum<0){
            if(n%-sum==0){
                dash(n/-sum, 1, s);
                space();
                cout<<'1'<<endl<<"- "<<s<<endl<<n/-sum<<endl;
            }
            else if(prime(-sum,2)==1 || prime(n,2)==1){
                dash(n,-sum, s);
                space();
                cout<<-sum<<endl<<"- "<<s<<endl<<n<<endl;
            }
            else{
                x=gcd(n,-sum);
                dash(x, n/x, s);
                space();
                cout<<x<<endl<<"- "<<s<<endl<<n/x<<endl;
            }
        }

        else if(sum>n){
            if(prime(sum,2)==1 || prime(n,2)==1){
                dash(sum%n, n, s);
                space();
                printf("%d\n%d%s\n%d\n",sum%n, sum/n, s, n);
            }
            else{
                x=gcd(n,sum);
                dash((sum/x)%x, (sum/x)/x, s);
                space();
                printf("%d\n%d%s\n%d\n",(sum/x)%x, (sum/x)/x, s, x);
            }
        }
        else if(abs(sum)>n && sum<0){
            if(prime(-sum,2)==1 || prime(n,2)==1){
                dash(-sum%n, n, s);
                space();
                printf("%d\n- %d%s\n%d\n",-sum%n, -sum/n, s, n);
            }
            else{
                x=gcd(n,-sum);
                dash((-sum/x)%x, (-sum/x)/x, s);
                space();
                printf("%d\n- %d%s\n%d\n",(-sum/x)%x, (-sum/x)/x, s, x);
            }
        }
    }
    return 0;
}
