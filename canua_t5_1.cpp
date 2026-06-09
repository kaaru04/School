#include <iostream>
using namespace std;

class DynIntQueue{
private:
    struct QueueNode {
        int value;
        QueueNode* next;
    };

    QueueNode* front;
    QueueNode* rear;
    int numItems;

public:
    DynIntQueue();
    ~DynIntQueue();
    void enqueue(int);
    void dequeue(int &);
    bool isEmpty();
    void clear();
    int getFront();
    void displayQueue();

};

DynIntQueue::DynIntQueue()
{
    front = NULL;
    rear = NULL;
    numItems = 0;
}

DynIntQueue::~DynIntQueue()
{
    clear();
}

void DynIntQueue::enqueue(int num)
{
    //TODO
    QueueNode* newNode;

    newNode = new QueueNode;
    newNode->value = num;
    newNode->next = NULL;

    if(isEmpty())
    {
        front = newNode;

    }
    else
    {
        rear->next = newNode;
    }

    rear = newNode;
    numItems++;
}

void DynIntQueue::dequeue(int &num)
{
    QueueNode* temp;

    if (isEmpty())
    {
        cout << "The queue is empty.\n";
    }   
    else
    {
        num = front->value;
        temp = front->next;
        delete front;
        front = temp;
        numItems--;
    } 
}

bool DynIntQueue::isEmpty()
{
    bool status;
    if (numItems)
        status = false;
    else
        status = true;

    return status;
}


void DynIntQueue::clear()
{
    int value;

    while (!isEmpty())
        dequeue(value);
}

int DynIntQueue::getFront()
{
    if(isEmpty())
    {
        cout<< "The queue is empty!.\n";
        return -1;

    }
    else
    {
        return front->value;
    }
    
}

void DynIntQueue::displayQueue()
{
    if(isEmpty()){
        cout << "Queue is empty!\n";
    }
    else{
        QueueNode* temp=front;

        while(temp!=NULL)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }


    }
}

int main()
{
    DynIntQueue myQueue;
    int value;
    
    cout << "Enqueueing 4 integers...\n";

    // Enqueue 4 items
    for (int x = 5; x < 21; x += 5)
    {
        myQueue.enqueue(x);
    }

    myQueue.displayQueue();
    cout << "Front element: " << myQueue.getFront() << endl;
    myQueue.dequeue(value);
    myQueue.dequeue(value);
    myQueue.displayQueue();
    cout << "Front element: " << myQueue.getFront() << endl;
    return 0;
}