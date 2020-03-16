#include <QCoreApplication>
#include <iostream>

using namespace std;

class M
{
private:
    int x,y;
public:
    void set(int a,int b);
    void show();
};

void M::set(int a, int b)
{
    x=a;y=b;
}

void M::show()
{
    cout<< "X = "<< x<<endl;
    cout<< "Y = "<< y<<endl;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    M x;

    cout<< "Hello World!"<< endl;
    x.set(2,5);
    x.show();
    return a.exec();
}
