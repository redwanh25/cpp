int add(int a, int b)
{
    return a+b;
}

int biog(int a, int b)
{
    return a-b;
}

int gcd(int a, int b)
{
    if(a%b==0)
        return b;
    else return gcd(b, a%b);
}

int lcm(int a, int b)
{
    static int m=0;
    if((a*(++m))%b==0){
        int b=m;
        m=0;
        return a*b;
    }
    else return lcm(a, b);
}
