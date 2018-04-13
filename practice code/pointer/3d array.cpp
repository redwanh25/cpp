#include<iostream>
using namespace std;
int main()
{
/// b[0][0][] b[0][1][]    b[1][0][] b[1][1][]     b[2][0][] b[2][1][]
///   1 2 3    4 5 6         1 2 3     4 5 6         1 2 3     4 5 6
    int b[3][2][3]={1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6};
    int (*p)[2][3]=b;
    cout<<*(*(*(p)+1)+2)<<endl;
    cout<<*(*(*(p+2)+1))<<endl;
    cout<<*(*(*(p)))<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<3; k++){
                cout<< b[i][j][k] <<" ";
            }
            cout<<"| ";
        }
        cout<<"   | ";
    }
    return 0;
}
