#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int x,y;
int main()
{
    ofstream prout("text2.txt");
    ifstream print("text.txt");
    print >> x >> y;
    prout << x * y <<endl;
};