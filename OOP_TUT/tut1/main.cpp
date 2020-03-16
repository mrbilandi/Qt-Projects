#include <QCoreApplication>
#include <iostream>

using namespace std;

class M
{
private:
    int x,y,z;
    int area();
public:
    M(int,int,int);
    ~M();
};

M::M(int w, int h, int l):x(w),y(h),z(l)
{}
int M::area(){
    return x*y*z;
}
M::~M()
{
    cout<< "volume = "<< M::area()<< endl;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    // parametric constructor
    {
        cout << "parametric constructor : ";
        M cub(3,5,7);
    }

    return a.exec();
}
