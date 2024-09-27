#include<iostream>
using namespace std;
void numberCrown(int n) {
    // Write your code here.
    for( int i = 1; i <= n; i++ ) {
        for( int j = 1; j<=2*n; j++) {
            if( j <= n && j <= i) {
                cout << j<<" ";
            }
            else if (j> n && j>2*n - i) {
                cout << 2*n - j + 1<<" ";
            }
            else cout << "  ";
        }
        cout << endl;
    }
}

using namespace std;
int main() {
numberCrown(5);
return 0;
}