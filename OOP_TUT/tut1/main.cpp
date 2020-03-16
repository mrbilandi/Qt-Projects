#include <QCoreApplication>
#include <iostream>

using namespace std;

class M
{
public:
    void show();
};

void M::show()
{
    cout<< "Welcome!"<< endl;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    M x;

    cout<< "Hello World!"<< endl;

    x.show();
    return a.exec();
}
