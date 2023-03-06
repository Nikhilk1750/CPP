#include <iostream>
using namespace std;

class Complex {
    private:
        double real;
        double img;

    public:
        Complex(double r, double i) {
           real = r;
            img = i;
        }

        Complex add(Complex c) {
            double r = real + c.real;
            double i = img + c.img;
            Complex result(r, i);
            return result;
        }

        void display() {
            //cout << real << " + " << img << "i" << endl;
	    cout<<real;
        if(img>=0)
                cout<<"+";
        cout<<img<<"J"<<endl;
	}
};

int main() {
    Complex* c1 = new Complex(2.5, -3.0);
    Complex* c2 = new Complex(1.5, 2.0);
    Complex c3 = c1->add(*c2);
    c1->display();
    c2->display();
    c3.display();
    delete c1;
    delete c2;
    return 0;
}




