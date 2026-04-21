#include <iostream>
using namespace std;

void hanoi(int n, char source, char helper, char dest) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << dest << endl;
        return;
    }

    hanoi(n-1, source, dest, helper);
    cout << "Move disk " << n << " from " << source << " to " << dest << endl;
    hanoi(n-1, helper, source, dest);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    hanoi(n, 'A', 'B', 'C');
    return 0;
}