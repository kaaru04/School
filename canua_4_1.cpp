#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <math.h>
using namespace std;

int main()
{
    string x;
    stack<char, vector<char>> iStack;

    int openBrace = 0;
    int closeBrace = 0;
    bool isEmpty = true;

    
    cout << "Enter a string of braces: ";
    cin >> x;

    for(int i = 0; i < x.size(); i++){
        if(x[i] == '{'){
            openBrace++;
            iStack.push(x[i]);
        }
        if(x[i] == '}'){
            closeBrace++;
            iStack.push(x[i]);
        }
    }

int o, c, diff;

o = openBrace;
c = closeBrace;

diff = o - c;
diff = abs(diff);
cout << "Minimum number of replacements required: " << diff << endl;


    return 0;
}