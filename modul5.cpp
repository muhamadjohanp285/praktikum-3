#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "\nMasukkan jumlah baris Segitiga Pascal: ";
    cin >> n;

    int segitiga[n][n];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                segitiga[i][j] = 1;
            }
            else {
                segitiga[i][j] = segitiga[i - 1][j - 1] + segitiga[i - 1][j];
            }

        }
    }

    for (int i = 0; i < n; i++) 
    {

        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << segitiga[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
