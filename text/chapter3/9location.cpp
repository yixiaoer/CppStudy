#include <iostream>
using namespace std;
class Location
{
  public:
    Location(int m, int n)
    {
        X = m;
        Y = n;
    }
    void Init(int initX, int initY)
    {
        X = initX;
        Y = initY;
    }
    int GetX()
    {
        return X;
    }
    int GetY()
    {
        return Y;
    }

  private:
    int X, Y;
};

int main(int argc, char const *argv[])
{
    Location A3(212, 289);
    //A3.Init(212, 289);
    cout << A3.GetX() << "   " << A3.GetY() << endl;
    return 0;
}
