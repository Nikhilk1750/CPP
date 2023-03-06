#include <iostream>
using namespace std;

class Distance {
    private:
        int meter;
        
        
        friend int add(Distance);

    public:
        Distance() : meter(0) {}
        
};

// friend function definition
int add(Distance d) {

    //accessing private members from the friend function
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance D;
    cout << "Distance: " << add(D);
    return 0;
}
