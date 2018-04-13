#include <iostream>     // std::cout
#include <sstream>      // std::istringstream
#include <string>       // std::string
using namespace std;
int main ()
{
    string str = "125 320 512 750 333";
    stringstream red (str);     /// "istringstream" dileo hoy;
    int val[10];
    for (int n=0; n<5; n++){
        red >> val[n];
        std::cout << val[n] << '\n';
    }
    return 0;
}

