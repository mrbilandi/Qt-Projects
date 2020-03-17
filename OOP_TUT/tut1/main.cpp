#include <iostream>

using namespace std;

class M
{
private:
    int x,y,z;
    friend int area(M dim);
public:
    M(int,int,int);

    ~M();
};

M::M(int w, int h, int l):x(w),y(h),z(l)
{}
int area(M dim){
    return dim.x*dim.y*dim.z;
}
M::~M()
{
    cout<< "Deconstructor called" << endl;
}
int main()
{    

    M cub(3,5,7);
    cout << "Area : " << area(cub) << endl;

}
