# winter-vacation-homework-20190130-25027
winter-vacation-homework-20190130-25027 created by GitHub Classroom

#include <iostream>
using namespace std;
int main() {
    int day;
    int number[999];
    int total = 0;
    cin >> day;
    for (int i = 0; i < day; i++) {
        cin >> number[i];
        total = total + (i + 1) * number[i];
    }
    cout << total;
}
