#include <iostream>
using namespace std;

void hanoi(int d, char A, char B, char C)
{
    if(d==0)
    {
        return;
    }
    else
    {
        hanoi(d-1, A, C, B);
        cout<<"Disk "<<d<<" moved from "<<A<<" to "<<C<<endl;
        hanoi(d-1, B, A, C);
    }
}


int main()
{
    int d;
    char A, B, C, choice;

    do{
        cout<<"Enter number of disks: ";
        cin>>d;

        hanoi(d, 'A', 'B', 'C');

        cout<<"Try again?(Enter Y to try again or N to exit): ";
        cin>>choice;
        cout<<endl;
    }while(choice=='y' || choice=='Y');

    return 0;
}