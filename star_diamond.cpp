void nStarDiamond(int n) {
    // Write your code here.
    for( int i = 1; i <= 2 * n; i++) {
        for( int j = 1; j <= 2 * n - 1; j++ ) {
            if( i <= n) {
                if( j >= n - (i-1) && j <= n + (i-1) ) cout << "*";
                else cout << " ";
            } else {
                if (j >= i - n && j <= 3 * n - i)
                  cout << "*";
                else
                  cout << " ";
            }
        }
        cout << endl;
    }
}
