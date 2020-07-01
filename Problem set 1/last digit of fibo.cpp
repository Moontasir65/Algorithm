#include <iostream>
using namespace std;
int lastDigit(long long n) {
    int first = 0;
    int second = 1;

    int res;

    for (int i = 2; i <= n; i++) {
        res = (first + second) % 10;
        first = second;
        second = res;
    }

    return res;
}

int main() {
    int n;
    cin >> n;
    int c =lastDigit(n);
    cout <<c;

    return 0;
}
