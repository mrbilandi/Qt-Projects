#include <iostream>

using namespace std;

class M
{
private:
    int x,y,z;
    int area();
public:
    M(int,int,int);
    int Area(){
        return area();
    }

    ~M();
};

M::M(int w, int h, int l):x(w),y(h),z(l)
{}
int M::area(){
    return x*y*z;
}
M::~M()
{
    cout<< "Deconstructor called" << endl;
}
int main()
{    

    M cub(3,5,7);
    cout << "Area : " << cub.Area() << endl;

}
