#include <QCoreApplication>
#include <iostream>

using namespace std;

class M
{
private:
    int x,y,z;
public:
    M();
    M(int,int,int);
    ~M();
};

M::M()
{
    x=2;y=3;z=4;
}

M::M(int w, int h, int l)
{
    x=w;y=h;z=l;
}

M::~M()
{
    cout<< "volume = "<< x*y*z<< endl;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // default constructor
    {
        cout << "default constructor : ";
        M cub;
    }

    // parametric constructor
    {
        cout << "parametric constructor : ";
        M cub(3,5,7);
    }

    return a.exec();
}
