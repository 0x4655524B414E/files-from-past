#include <iostream>
using namespace std;

int main() {
    for (int a = 1101; a <= 1299; a++) {
        int sum1 = 0;
        for (int i = 1; i < a; i++) {
            if (a % i == 0) {
                sum1 += i;
            }
        }
        for (int b = a + 1; b <= 1300; b++) {
            int sum2 = 0;
            for (int j = 1; j < b; j++) {
                if (b % j == 0) {
                    sum2 += j;
                }
            }
            if (sum1 == b && sum2 == a) {
                cout << a << " and " << b << " are friendly numbers." << endl;
                return 0;
            }
        }
    }
    cout << "No friendly numbers found in the given range." << endl;
    return 0;
}
