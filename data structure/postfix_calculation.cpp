#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;

char operand(int ch)
{
    return (ch >= '0' && ch <= '9') ? true : false;
}

int calculation(int x, int y, char ch)
{
    if(ch == '*'){
        return x * y;
    }
    else if(ch == '/'){
        return x / y;
    }
    else if(ch == '+'){
        return x + y;
    }
    else if(ch == '-'){
        return x - y;
    }
}

int main()
{
    stack < char > s;
    char ch, res;
    int x, y;
    do{
        scanf("%c ", &ch);
        if(operand(ch)){
            s.push(ch);
        }
        else{
            x = s.top() - '0';
            s.pop();
            y = s.top() - '0';
            s.pop();
            res = calculation(x, y, ch) + '0';
            s.push(res);
        }
    }while(ch != '\n');
    cout << res - '0' << endl;
    return 0;
}
