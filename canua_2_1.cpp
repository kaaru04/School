
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;


char s1[100], s2[100];
char c;

void string_length(char* str) {
    
{
    
    int length = 0;
    cout << "Enter a string: ";
    cin.getline(s1, 100);
    while (*str != '\0') {
        length++;
        str++;
    }
    cout << "Length of the string is: " << length;
    cout << "\n\nTry again? (Y/N): ";
    cin >> c;
    cin.ignore();
}if (c!= 'n' && c!= 'N'){
    return;
}
else{
    cout << "Exiting..." << endl;
    exit(0);}
}




void string_compare(char* s1, char* s2) {

    {
    cout << "Enter first string: ";
    cin.getline(s1, 100);
    cout << "Enter second string: ";
    cin.getline(s2, 100);
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    if (*s1 == *s2) {
        cout << "The strings are equal." << endl;
    } else if (*s1 < *s2) {
        cout << "The first string is smaller.";
    } else {
        cout << "The first string is bigger.";
    }
    cout << "\n\nTry again? (Y/N): ";
    cin >> c;
    cin.ignore();
}if (c!= 'n' && c!= 'N'){
    return;
}
else{
    cout << "Exiting..." << endl;
    exit(0);}
}

void string_concatenate(char* s1, const char* s2) {
    {
    char* ptr = s1;
    while (*ptr != '\0') {
        ptr++;
    }
    while (*s2 != '\0') {
        *ptr = *s2;
        ptr++;
        s2++;
    }
    *ptr = '\0';
    cout << "Concatenated string: " << s1 << endl;
    cout << "\n\nTry again? (Y/N): ";
    cin >> c;
    cin.ignore();
}if (c!= 'n' && c!= 'N'){
    return;
}
else{
    cout << "Exiting..." << endl;
    exit(0);}
}

int main(){
    
    int choice;
    do {
        cout << "What do you want to do?\n1. Find the string length\n2. Compare two strings \n3. Concatenate two strings\n4. Exit\nEnter your choice: ";
        std::cin >> choice;
        std::cin.ignore();
        switch (choice) {
            case 1:
                string_length(s1);
                break;
            case 2:
                string_compare(s1, s2);
                break;
            case 3:
                string_concatenate(s1, s2);
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}