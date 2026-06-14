#include <iostream>
#include <string>
using namespace std;

class NameStack
{

private:
    char data[100];
    int top;

public:
    NameStack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
      return top == 99;
    }

    void push(char ch)
    {
        // TODO: Add character to stack
        if(isFull())
        {
          cout<<"Stack is full!";
        }
        else
        {
          top++;
          data[top] = ch;
        }
    }

    char pop()
    {
        // TODO: Remove and return top character
        if(isEmpty())
        {
          cout<<"Stack is Empty!";
          return '\0';
        }
        else
        {
          char temp = data[top];
          top--;
          return temp;
        }
    }

    bool isConsonant(char ch)
    {
        // TODO: Return true if character is a vowel
        return 
        ch=='b' || ch=='c'|| ch=='d' || ch=='f' || ch=='g' ||
        ch=='h' || ch=='j'|| ch=='k' || ch=='l' || ch=='m' ||
        ch=='n' || ch=='p'|| ch=='q' || ch=='r' || ch=='s' ||
        ch=='t' || ch=='v'|| ch=='w' || ch=='x' || ch=='y' ||
        ch=='z';

    }

    string removeConsonant(string name)
    {
        string result = "";
        // TODO:
        // Traverse the name
        // Push only non-vowel characters into the stack
        for (int i = 0; i<name.length(); i++)
        {
          if(!isConsonant(name[i]))
          {
            push(name[i]);
          }
        }

        // Temporary stack to restore original order

        NameStack temp;
        // TODO:
        // Transfer elements from current stack to temp stack
        // TODO:
        while(!isEmpty())
        {
          temp.push(pop());

        }
        
        while(!temp.isEmpty())
        {
          result +=temp.pop();
        }
        // Build result string while restoring original order
        return result;
    }
};

int main()
{
    NameStack ns;
    string name;
    cout << "Enter a name(small letters only!): ";
    cin >> name;
    string processed = ns.removeConsonant(name);
    cout << "Processed Name: " << processed << endl;
    return 0;
}