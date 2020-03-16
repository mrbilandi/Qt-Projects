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
    M(M &);
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

M::M(M &m)
{
    x=m.x; y=m.y; z=m.z;
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
        M cub1;
    }

    // parametric constructor
    {
        cout << "parametric constructor : ";
        M cub2(3,5,7);
    }

    // copy constructor
    {
        cout << "copy constructor : ";
        M cub(7,8,5);
        M cub3(cub);
    }

    return a.exec();
}
