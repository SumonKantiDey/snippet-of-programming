//http://www.dreamincode.net/forums/topic/35344-c-deque-tutorial/


#include <iostream>

#include <deque>
using namespace std;

int main() {

    //  declare two deques and intialize the second to contain 10 zeros

    deque<int> dq1;

    deque<int> dq2(10,0);

    //  assign 10 copies of the int 5 to deque 1

    dq1.assign(10,5);

    //  output each deque

    cout << "deque 1: ";

    for (long i=0; i<(long)dq1.size(); ++i) cout << dq1[i] << " ";

    cout << endl;
    cout << "deque 2: ";
    for (long i=0; i<(long)dq2.size(); ++i) cout << dq2.at(i) << " ";

    cout << endl;

    //  resize deque 1

    dq1.resize(15,10);

    //  output each deque

    cout << "deque 1: ";

    for (long i=0; i<(long)dq1.size(); ++i) cout << dq1.at(i) << " ";

    cout << endl;
    cout << "deque 2: ";

    for (long i=0; i<(long)dq2.size(); ++i) cout << dq2.at(i) << " ";

    cout << endl;

    //  swap contents of the deques

    dq1.swap(dq2);

    //  output each deque

    cout << "deque 1: ";

    for (long i=0; i<(long)dq1.size(); ++i) cout << dq1.at(i) << " ";

    cout << endl;


    cout << "deque 2: ";

    for (long i=0; i<(long)dq2.size(); ++i) cout << dq2[i] << " ";

    cout << endl;


    //  clear deque 1

    dq1.clear();

    cout << "after clear(), size of deque 1 is now " << dq1.size() << " elements.";

    return 0;

}
