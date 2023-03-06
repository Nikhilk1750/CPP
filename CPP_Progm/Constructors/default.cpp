#include <iostream>
using namespace std;

class MyClass {
    private:
        int x;
    public:
        MyClass() {
            x = 50;
        }
        int getVal() {
            return x;
        }
};

int main() {
    // allocate memory for a new instance of MyClass using new operator
    MyClass *myObj = new MyClass();

    // call the getVal() method on the object
    cout << "The value of x is: " << myObj->getVal() << endl;

    // free the memory allocated using delete operator
    delete myObj;

    return 0;
}
