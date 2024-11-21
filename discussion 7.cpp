#include <iostream>
using namespace std;

// Pseudo-functions representing the explanations of the '*' operator

void pseudoDereferenceOperator() {
    int value;
    cout << "\nDereference Operator (*):" << endl;
    cout << "Used to access the value at the memory location a pointer points to." << endl;
    cout << "Enter an integer value to demonstrate dereferencing: ";
    cin >> value;

    int* ptr = &value;  // Pointer stores the address of 'value'
    cout << "    int value = " << value << ";" << endl;
    cout << "    int* ptr = &value; // Pointer stores the address of 'value'" << endl;
    cout << "    cout << *ptr; // Output: " << *ptr << endl << endl;  // Dereference the pointer
}

void pseudoMultiplicationOperator() {
    int a, b;
    cout << "\nMultiplication Operator (*):" << endl;
    cout << "Used to multiply two numbers." << endl;
    cout << "Enter two integers to multiply:" << endl;
    cout << "First number: ";
    cin >> a;
    cout << "Second number: ";
    cin >> b;

    cout << "    int a = " << a << ", b = " << b << ";" << endl;
    cout << "    cout << a * b; // Output: " << a * b << endl << endl;
}

void pseudoPointerDeclaration() {
    int value;
    cout << "\nPointer Declaration (*):" << endl;
    cout << "Used to declare a pointer variable." << endl;
    cout << "Enter an integer value to demonstrate pointer declaration: ";
    cin >> value;

    int* ptr = &value;  // 'ptr' is a pointer to 'value'
    cout << "    int value = " << value << ";" << endl;
    cout << "    int* ptr = &value; // 'ptr' is a pointer to 'value'" << endl;
    cout << "    cout << ptr; // Output: " << ptr << " (memory address)" << endl;
    cout << "    cout << &value; // Output: " << &value << " (memory address)" << endl << endl;
}

void pseudoDisplayMenu() {
    // Pseudo-function to display the menu
    cout << "\nMenu:" << endl;
    cout << "1. Dereference Operator" << endl;
    cout << "2. Multiplication Operator" << endl;
    cout << "3. Pointer Declaration" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    do {
        pseudoDisplayMenu();  // Display menu
        cin >> choice;

        if (choice == 1) pseudoDereferenceOperator();  // Show dereference example
        else if (choice == 2) pseudoMultiplicationOperator();  // Show multiplication example
        else if (choice == 3) pseudoPointerDeclaration();  // Show pointer declaration example
        else if (choice == 4) cout << "Goodbye!" << endl;  // Exit message
        else cout << "Invalid choice. Try again." << endl;  // Invalid input handling
    } while (choice != 4);  // Loop until user chooses to quit

    return 0;
}
