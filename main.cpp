#include "btree.h"
#include <iostream>
#include "string.h"

using namespace std;

int main()
{
    string user_cmd, user_input;
    Btree btree;
    while (user_cmd !="^D")
    {
        cin >> user_cmd;
        cin >>user_input;
        if (user_cmd == "echo")
        {
            cout <<btree.echo(user_input) << endl;
        }
        if (user_cmd == "insert")
        {
            btree.insert(user_input);
        }
        if (user_cmd == "size")
        {
            btree.size(1);
        }
        if (user_cmd == "find")
        {
            btree.find(user_input);
        }
        if (user_cmd == "print")
        {
            btree.print();
        }
        if (user_cmd == "breadth")
        {
            btree.breadth();
        }
        if (user_cmd == "distance")
        {
            btree.distance();
        }
        if (user_cmd == "balanced")
        {
            btree.balance();
        }
        if (user_cmd == "rebalance")
        {
            btree.rebalance();
        }

    }
   return 0;
}
