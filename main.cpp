//
// Created by Ruslan Rozumnyi on 1/23/20.
//

#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    srand (time(NULL));
    int n;
    cin >> n;
    int * a = new int[n];

    Queue * q = new Queue();
    q->createQueue();

    for(int i = 0; i < n; i++) {
        a[i] = rand() % 1000;
        q->push(q, a[i]);
    }


    //Testing
/*
  cout << q->Top(q) << endl;

    q->pop(q);


    cout << q->Top(q) << endl;

    q->pop(q);

    cout << q->Top(q) << endl;
    cout << q->IsEmpty(q) << endl;
    q->pop(q);
    q->pop(q);
    q->pop(q);
    q->pop(q);
    q->pop(q);




    q->push(q, 200);

    cout << q->Top(q) << endl;

    q->push(q, 20);

    cout << q->Top(q) << endl;

    q->pop(q);

    cout << q->Top(q) << endl;
*/

    delete [] a;


    return 0;
}