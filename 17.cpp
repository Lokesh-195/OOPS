/*class intpair holding two intezers.has member variables to hold values two member
functions to be created  set and print whre set lets assign values and print
prints them*/
#include<iostream>
using namespace std;
class Intpair
{
    public:
        int  m_first {};
        int  m_second {};

        void set(int first, int second){
            m_first = first;
            m_second = second;
        }
        void print(){
            cout<<"Pair("<<m_first<<","<< m_second<<")\n";

        }



};

int main(){
    Intpair p1;
    p1.set(5,6);

    Intpair p2;
    p2.set(7,9);

    p1.print();
    p2.print();
    return 0;
}