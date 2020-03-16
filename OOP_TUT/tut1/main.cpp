#include <QCoreApplication>
#include <iostream>

using namespace std;

class M
{
private:
    int x,y;
public:
    int w,h;
    int area();
    void set(int a,int b);
    void show();
};

int M::area()
{
    return w*h;
}

void M::set(int a, int b)
{
    x=a;y=b;
}

void M::show()
{
    cout<< "X = "<< x<<endl;
    cout<< "Y = "<< y<<endl;
    cout<< "Area = "<< M::area() <<endl;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    char n[20];
    cin>>n;

    cout<< n<< endl;

    M x;

    x.w = 4;x.h=9;

    x.set(2,5);
    x.show();
    return a.exec();
}
