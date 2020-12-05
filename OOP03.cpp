//OOP03.cpp

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Parallelepiped{
    public:

    double hight;
    double lenth;
    double deep;

    double volum(){
        double v;
        
        return v = lenth * deep * hight;
    }
    void setAll(double l, double d, double h){
        lenth   = l;
        deep    = d;
        hight   = h;
    }
    void showAll(){
        cout << "Lenth: " << lenth   << endl;
        cout << "Deep: "  << deep    << endl;
        cout << "Hight: " << hight   << endl;
        cout << "Volum: " << volum() << endl;
    }
    Parallelepiped(double l, double d, double h)
    {
        setAll(l,d,h);
    }
    Parallelepiped(){
        setAll(0,0,0);
    }
};
class phisicParallelepiped: public Parallelepiped{
    public:

    double mass;

    double getRo()
    {
        double ro;
        ro = mass / volum();

        return ro;
    }
    double reMass()
    {
        double m = mass;
        m /= 2;

        return m;
    }
    void showAll(){
        cout << "Lenth: "    << lenth       << endl;
        cout << "Deep: "     << deep        << endl;
        cout << "Hight: "    << hight       << endl;
        cout << "Mass:"      << mass        << endl;
        cout << "Density: "  << getRo()     << endl;
        cout << "New mass: " << reMass()    << endl;
    }
    void setAll(double l, double d, double h, double m){
        Parallelepiped::setAll(l, d, h);
        mass = m;
    }
    phisicParallelepiped(double l, double d, double h, double m):Parallelepiped(l,d,h){
        mass = m;
    }
    phisicParallelepiped():Parallelepiped(){
        mass = 1;
    }
};
int main(){
    double l, d, h, m;
    printf("Pleas enter lenth, deep, hight and mass: ");
    cin >> l >> d >> h >> m;
    printf("__________________\n");

    Parallelepiped          objA(l,d,h);
    phisicParallelepiped    objB(l, d, h, m);

    objA.showAll();
    cout << endl;
    objB.showAll();
    cout << endl;

    return 0;
}