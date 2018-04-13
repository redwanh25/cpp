#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,k;
    string red ("There are two needles in this haystack with needles.");
    string s ("needle");
    int found=red.find(s);    /// string::size_type fff= red.find(red1);
///  size_type is an unsigned integral type. // khuje na paile found = -1 hoy. mane -1 return  kore.
    if(found!=string::npos)   /// string::npos mane -1  // if(found!= -1 ) dile o hobe.
            cout<<found<<endl;
    if(red.find("hifsf")==string::npos)
            cout<<red.find(s)<<endl;
    found=red.find("in");
        cout<<found<<endl;
    found=red.find('.');
        cout<<found<<endl;
    red.replace(red.find(s),s.length(),"redwan");
        cout<<red<<endl;
    found=red.rfind(s);     /// ulta dik theke dekhbe ase ki na.thakle oitar position bolbe.
        cout<<found<<endl;
    return 0;
}
