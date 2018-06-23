//http://www.dreamincode.net/forums/topic/35344-c-deque-tutorial/
#include <iostream>
#include <deque>
using namespace std;



int main() {

    //  create an empty deque and fill with ints using push_back()

    deque<int> dq;

    for (int i=0; i<5; ++i) {

        dq.push_back(i);

    }

    //  display to screen

    for (int i=0; i<(signed)dq.size(); ++i) cout << dq[i];///dq[i]

    cout << endl;

    //  add 3 copies of the number 8 to the front of the deque using push_front()

    for (int i=0; i<3; ++i) {

        dq.push_front(8);

    }

    //  display to screen

    for (int i=0; i<(signed)dq.size(); ++i) cout << dq.at(i);

    cout << endl;



    //  remove first and last elements with pop_back() and pop_front()

    dq.pop_front();

    dq.pop_back();



    //  display to screen

    for (int i=0; i<(signed)dq.size(); ++i) cout << dq.at(i);
    cout << endl;



    return 0;

}
