#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;

public:
    Complex() : real(0.0), imag(0.0) {

    }
    Complex(float real, float imag) : real(real), imag(imag) {

    }
    Complex operator+(Complex c) {
        Complex res;
        res.real = this->real + c.real;
        res.imag = this->imag + c.imag;
        return res;
    }
    void display() {
        cout << "Real: " << real << " Imaginary: " << imag << endl;
    }
};

int main() {

    Complex C1; 
    Complex C2(3.0, 4.0); 
    Complex C3(1.5, 2.5); 
    Complex result = C2 + C3;
    std::cout << "Result of addition:" << std::endl;
    result.display();

    return 0;
}