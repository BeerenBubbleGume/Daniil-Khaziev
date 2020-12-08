//OOP06.cpp

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class ComplexNum{
    public:
    double imagnum;
    double num;

    long double imcomplex(){
        double s = 0;
        int i = -1;
        s += num + i * imagnum;
        return s;
    }
    long double imsubstraction(){
        double s = 0;
        int i = -1;  
            s += num - i * imagnum;
        return s;
    }
    long double immulti(){
        double s = 0;
        int i = -1;
            s += num * i * imagnum;
        return s;
    }
    long double imdevis(){
        double s = 0;
        int i = -1; 
            s += num / imagnum * i;
        return s;
    }
    void setAll(double i, double n){
        imagnum = i;
        num = n;
    }
    void show(){
        cout << "Summ x + yi = " << imcomplex() << endl;
        cout << "Substraction x - yi = " << imsubstraction() << endl;
        cout << "Multiple x * yi = " << immulti() << endl;
        cout << "Devision x / yi = " << imdevis() << endl;
    }
    ComplexNum(){
        setAll(0, 0);
    }
    ComplexNum(double x, double y){
        setAll(x, y);
    }
};
class trigonomform: public ComplexNum{
    public:

    double trig(){
        double s = 0;
        int i = -1; 
            s = sqrt(pow(num, 2) + pow(imagnum, 2)) * cos(num) + i * sin(imagnum);
        return s;
    }
    void setAll(double x, double y){
        ComplexNum::setAll(x, y);
    }
    void show(){
        cout << "triganform is: " << trig() << endl;
    }
    trigonomform(double x, double y){
        setAll(x, y);
    }
};
int main(){
    double x, y;

    printf("Enter number:");
    cin >> x;
    printf("\nEnter imagenering number:");
    cin >> y;
    cout << endl;

    ComplexNum objA(x, y);
    trigonomform objB(x,y);

    objA.show();
    cout << endl;
    objB.show();

    return 0;
}