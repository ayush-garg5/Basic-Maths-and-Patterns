void nStarTriangle(int n) {
    // Write your code here.
    for (int i = 1; i <= 2 * n - 1; i++) {
        for ( int j = 1; j <= n; j++ ) {
            if ( i <= n ) {
                if ( j <= i) cout << "*";
                else cout << ' ';
            }
            else {
                if( j <= (2*n - i) ) cout << '*';
                else cout << ' ';
            }
        }
        cout << endl;
    }
}