#include <QCoreApplication>
#include <iostream>

using namespace std;

class M
{
private:
    int x,y,z;
public:
    M();
    ~M();
};

M::M()
{
    x=2;y=3;z=4;
}

M::~M()
{
    cout<< "volume = "<< x*y*z<< endl;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    {
        M cub;
    }

    return a.exec();
}
