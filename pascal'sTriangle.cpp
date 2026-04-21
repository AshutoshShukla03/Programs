#include <iostream>
using namespace std;

void pascal(int n) {
    for(int i = 0; i < n; i++) {
        int num = 1;
        for(int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pascal(n);
    return 0;
}