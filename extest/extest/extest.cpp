#include <iostream>
#include <string>

using namespace std;

class Flower
{
    int num;
    int height;
    string name;
public:
    Flower(int h, string nm = "Rose", int n = 10) : num(n), height(h) {
        name = nm;
    }

    ~Flower()
    {
        delete[] &name;
    }
};

class Garden
{
    Flower& f;
public:
    void add_flower(Flower& f1)
    {
        f = f1;
    }
};

int main()
{
    Garden g();
    Flower f();

    return 0;
}