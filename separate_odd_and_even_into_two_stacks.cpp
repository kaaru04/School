#include <iostream>
using namespace std;

class Stack {
private:
    static const int MAX = 100;
    int arr[MAX];
    int top;

public:
    Stack() {
        // TODO
        top=-1;
    }

    bool isEmpty() {
        // TODO
        return top==-1;
    }

    bool isFull() {
        // TODO
        return top == MAX - 1;
    }

    void push(int num) {
        // TODO
        if(!isFull())
        {
            top++;
            arr[top] = num;

        }
    }

    int pop() {
        // TODO
        if(!isEmpty())
        {
            int val = arr[top];
            top--;
            return val;
        }

        return -1;
    }
};

int main() {
    Stack os;
    Stack es;

    int n;

    cout << "How many numbers? ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        // TODO:
        // If odd push to oddStack
        int temp = num%2;

        if(temp == 1)
        {
            os.push(num);
        }
        // If even push to evenStack
        else
        {
            es.push(num);
        }
    }

    cout << "\nOdd Numbers:\n";

    while(!os.isEmpty())
    {
        // TODO:
        // Display odd numbers
        cout<<os.pop()<<endl;

    }

    cout << "\nEven Numbers:\n";

    while(!es.isEmpty())
    {
        // TODO:
        // Display even numbers
        cout<<es.pop()<<endl;

    }

    return 0;
}