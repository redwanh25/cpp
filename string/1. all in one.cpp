#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,k;
    string red="Redwan", red1("Hossain");
    string :: iterator it;
    for(it=red.begin(); it!=red.end(); it++)
        cout<<*it<<endl;
  ///  red.swap(red1);
    red=red + " " + red1;
    cout<<red<<endl;

    it=red.begin();
    reverse(it+7, red.end());
    cout<<red<<endl;

    reverse(it,red.end()-8);   /// reverse(red.begin()+3,red.end()-8);
        cout<<red<<endl;
    reverse(it,red.end());
        cout<<red<<endl;
 ///   swap(red[0],red[7]);
    string :: iterator iit=red.begin()+8;
    it=red.begin();
    swap(*it,*iit);
    cout<<red<<endl;

 ///   red.erase(red.begin());

    red.erase(red.begin()+7, red.end()-6);
    cout<<red<<endl;

    cout<<red.size()<<" "<<red.length()<<" "<<red.max_size()<<endl;

    string str1, str2, str3 = "Ami ";
    str1 = "Test string: ";   // c-string
    str2 = 'x';               // single character
    str3 += str1 + str2 + " Redwan";       // string
  ///  str3.erase(str3.begin(),str3.end());
    cout << str3  << '\n';

    return 0;
}
