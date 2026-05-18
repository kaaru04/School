#include <iostream>
using std::cout;
using std::endl;

class ID{
private: 
int capacity; 
int size; 
int *array; 

public: 
ID(int Arraycap=10); 
~ID(){delete [] array;} 
int GetSize(); 
bool isEmpty() const; 
bool isFull() const; 
void InsertItem(int pos,int val); 
void RemoveItem(int pos); 
void AddItem(int val); 
void DisplayElements(); 
}; 

int main() {
    ID arr(5); 

    arr.AddItem(10); 
    arr.AddItem(20); 
    arr.AddItem(30); 
    arr.DisplayElements(); 
    arr.InsertItem(1, 15); 
    arr.DisplayElements(); 
    arr.AddItem(40); 
    arr.DisplayElements(); 
    arr.AddItem(50); 
    arr.RemoveItem(0); 
    arr.DisplayElements(); 
    cout << "Array size: " << arr.GetSize() << endl; 
    if (arr.isEmpty()) 
    { 
        cout << "Array is empty!" << endl; 
    } 
    else 
     { 
        cout << "Array is not empty!" << endl; 
    } 
    return 0;
}

ID::ID(int Arraycap){
    capacity = Arraycap;
    size = 0;
    array = new int[capacity];
}

int ID::GetSize(){
    return size;
}

bool ID::isEmpty() const{
    return size == 0;
}

bool ID::isFull() const{
    return size == capacity;
}

void ID::InsertItem(int pos,int val){
    if(pos < 0 || pos > size || isFull()){
        cout << "Invalid position or array is full!" << endl;
        return;
    }
    for(int i = size; i > pos; --i){
        array[i] = array[i-1];
    }
    array[pos] = val;
    ++size;
}

void ID::RemoveItem(int pos){
    if(pos < 0 || pos >= size){
        cout << "Invalid position!" << endl;
        return;
    }
    for(int i = pos; i < size - 1; ++i){
        array[i] = array[i+1];
    }
    --size;
}

void ID::AddItem(int val){
    if(isFull()){
        cout << "Array is full!" << endl;
        return;
    }
    array[size++] = val;
}

void ID::DisplayElements(){
    for(int i = 0; i < size; ++i){
        cout << array[i] << " ";
    }
    cout << endl;
}


