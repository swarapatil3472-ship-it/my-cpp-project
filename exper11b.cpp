#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
public:
    const char* what() const throw() {
        return "Attempted to divide by zero!";
    }
};

int main() {
    int x, y;
    cout << "Enter the two numbers: ";
    cin >> x >> y;
    
    try {
        if (y == 0) {
            MyException z;
            throw z;
        } else {
            cout << "x/y = " << x / y << endl;
        }
    } catch (MyException& e) {
        cout << e.what() << endl;
    }

    return 0;
}