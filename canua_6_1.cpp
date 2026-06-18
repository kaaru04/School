#include <iostream>
using namespace std;

int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5}; 
int temp[10]={0};

void rec(int i, int s)
{
    if(i<=s)
    {
        temp[arr[i]]++;
        rec(i+1,s);
    }
    else
    {
        return;
    }
}

int main()
{
    int i=0, s=8;


    rec(i, s);

    for(int j=0;j<=10;j++)
    {
        if(temp[j]>0)
        {
            cout<<j<<" appears "<<temp[j]<<" times\n";
        }
    }

    return 0;
}