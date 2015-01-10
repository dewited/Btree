#ifndef BTREE.H
#define BTREE.H
#include "string.h"
#include <iostream>
using namespace std;
class Btree
{
public:
    Btree(){};
    string echo (string);
    int insert(string);
    int size(int);
    int find (string);
    void print();
    void breadth();
    void distance();
    void balance ();
    void rebalance();
    Btree *left;
    Btree *right;
private:

};
#endif
