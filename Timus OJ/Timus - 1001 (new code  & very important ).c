#include <stdio.h>
#include <math.h>
double a[100000000];
int main()
{
//    double a[128*1024];    //ai khane o declear kora jabe.
    long long i=0;
    while(scanf("%lf",&a[i])!=EOF){
        a[i]=sqrt(a[i]);
        i++;
    }
    for(i=i-1; i>=0 ; i--)
        printf("%.4lf\n", a[i]);
    return 0;
}

/*

#include <stdio.h>
#include <math.h>
double a[128*1024];
int main()
{
    long long i=0;
    unsigned long long n;
    while(scanf("%llu",&n)!=EOF)
        a[i++]=sqrt(n);
    for( ; --i>=0; )
        printf("%.4lf\n", a[i]);
    return 0;
}

*/
