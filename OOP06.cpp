//OOP06.cpp

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

struct complexNum{
    double real,imag;
};
class ComplexNum{
    public:
    complexNum comp;
    
    ComplexNum(double x = 0,double y = 0){
        comp.real = x;
        comp.imag = y;
    }
    const ComplexNum& operator =(const ComplexNum &c){
        comp.real = c.comp.real;
        comp.imag = c.comp.imag;
        return *this;
    }

    ComplexNum operator +(const ComplexNum &c);
    ComplexNum operator *(const ComplexNum &c);
    ComplexNum operator -(const ComplexNum &c);
    ComplexNum operator /(const ComplexNum &c);

    ComplexNum Read();
        void print();
};
ComplexNum ComplexNum::operator +(const ComplexNum &c){
    ComplexNum t;
    t.comp.real = comp.real + comp.real;
    t.comp.imag = comp.imag + comp.imag;
    return t;
    }
ComplexNum ComplexNum::operator -(const ComplexNum &c){
    ComplexNum d;
    d.comp.real = comp.real - comp.real;
    d.comp.imag = comp.imag - comp.imag;
    return d;
    }
ComplexNum ComplexNum::operator *(const ComplexNum &c){
    ComplexNum m;
    m.comp.real = comp.real * comp.real - comp.imag * comp.imag;
    m.comp.imag = comp.real + comp.imag + comp.imag + comp.real;
    return m;
    }
ComplexNum ComplexNum::operator /(const ComplexNum &c){
    ComplexNum s;
    s.comp.real = (comp.real * comp.real + comp.imag * comp.imag) / (comp.real * comp.real + comp.imag * comp.imag);
    s.comp.imag = (comp.real * comp.imag - comp.real * comp.imag) / (comp.real * comp.real + comp.imag * comp.imag);
    return s;
    }
void ComplexNum::print (){
    if(comp.imag >= 0)
        cout << comp.real << "+" << comp.imag << "i\n";
    else
    {
        cout << comp.real << comp.imag << "i\n";
    } 
}
/*ComplexNum ComplexNum::Read(){
    double x,y;
    cout<<"Действительная часть: ";
    cin>>x;
    cout<<"Мнимая часть:       : ";
    cin>>y;
    ComplexNum A = ComplexNum(x,y);
    return A;
}*/
int main(){
    ComplexNum oper1(2.0, 4.0), oper2(3.0, 6.0), result;
    result = oper1 + oper2;
    result.print();
    result = oper1 - oper2;
    result.print();
    result = oper1 * oper2;
    result.print();
    result = oper1 / oper2;
    result.print();

    return 0;
}