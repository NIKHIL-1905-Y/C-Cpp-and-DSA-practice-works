#include <iostream>
using namespace std;

 class Tree
 {
    public:
    int a[100];

    void insert(int v,int n)
    {
        a[n]=v;
    }
    void insertLeftChild(int pi, int value)
    {
        a[2*pi +1]=value;
    }

    void insertRightChild(int pi,int value)
    {
        a[2*pi + 2]=value;
    }

    int getLeftChild(int pi)
    {
        return a[2*pi+1];
    }

    int getRightChild(int pi)
    {
        return a[2*pi +2];
    }

 };