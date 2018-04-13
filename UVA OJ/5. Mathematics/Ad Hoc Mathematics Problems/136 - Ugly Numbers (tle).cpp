/// Ugly numbers are positive numbers whose prime factors only include 2, 3, 5.
/// mane oi number k moulik utpadoke vangle 2,3,5 sara r kono prime number thakbe na.
/// tasara jeno number thakte pare.
/*  6 ugly.       because 2*3=6   // 2,3, due tai prime
    14 not ugly.  because 2*7=14  // 7 prime but, 7 thaka jabe na (prime er moddhe only 2,3,5).
    8 ugly.       because 2*4=8   // 2 prime number. r kono prime nai.
*/
/// algorithm (from GeeksForGeeks)
/*
    To check if a number is ugly, divide the number by greatest divisible
    powers of 2, 3 and 5, if the number becomes 1 then it is an ugly
    number otherwise not...
    For example, let us see how to check for 300 is ugly or not.
    Greatest divisible power of 2 is 4, after dividing 300 by 4 we get 75.
    Greatest divisible power of 3 is 3, after dividing 75 by 3 we get 25.
    Greatest divisible power of 5 is 25, after dividing 25 by 25 we get 1.
    Since we get 1 finally, 300 is ugly number.
*/

///code from wikipedia...
#include<iostream>
#include<cstdio>
using namespace std;
int ugly_number(int num)
{
    if(num==1)
        return 1;
    if(num<=0)
        return 0;
    while(num%2==0)
        num/=2;
    while(num%3==0)
        num/=3;
    while(num%5==0)
        num/=5;
    if(num==1)
        return 1;
    else
        return 0;

}
int main()
{
    int i,j=1,k=1,l,n;
    while(k<=1500){
        if(ugly_number(j)==1)
            k++;
        j++;
    }
    cout<<"The 1500'th ugly number is "<<j-1<<"."<<endl;
    return 0;
}
