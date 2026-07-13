#include <iostream>
using namespace std;

int Sqrt(int n) {
    if (n == 0 || n == 1)
        return n;

    int low = 1, high = n;
    int ans = 0;

    while (low <= high) {
        int mid =  (high + low) / 2;

        long long square =  mid * mid;

        if (square == n) {
            return mid; // Perfect square
        }
        else if (square < n) {
            ans = mid;      // Store possible floor value
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return ans; // Floor of sqrt
}

int main() {
    int n;
    cin >> n;

    cout << Sqrt(n) << endl;

    return 0;
}
