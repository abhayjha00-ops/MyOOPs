#include<bits/stdc++.h>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0,int i = 0){
        real = r;
        imag = i;
    }
    int getreal(){
        return real;
    }
    int getimag(){
        return imag;
    }

    friend Complex operator+(Complex c1, Complex c2);
};


Complex operator+(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}



int main(){
    Complex c1(2,3);
    Complex c2(2,3);
    Complex c3 = c1+c2;
    cout<<c3.getreal();

    return 0;
}