#include<iostream>
#include<deque>

using namespace std;
int main () {
    deque<int> d;
    d.push_back(10);
    d.push_front(11);
    for (int i:d) {
        cout << i << " ";
    }
    cout << endl;
    d.pop_back();
    for (int i:d) {
        cout << i << " ";
    }
    cout << endl;
    d.pop_front();
    for (int i:d) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Front : " << d.front() << endl;
    cout << "Back : " << d.back()<<endl;
}
