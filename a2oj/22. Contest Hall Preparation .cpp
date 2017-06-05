#include<bits/stdc++.h>
using namespace std;

int I, J, grid[100][100];
int di[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int dj[] = { 0, 0, 1, -1, 1, -1, -1, 1 };

int main() {
    //freopen("hall.in", "rt", stdin);
    int T;
    cin >> T;
    for (int tt = 1; tt <= T; tt++) {
        cin >> I >> J;
        for (int i = 0; i < I; i++)
            for (int j = 0; j < J; j++)
                cin >> grid[i][j];
        set<int> st;
        for (int i = 0; i < I; i++)
            for (int j = 0; j < J; j++)
                for (int k = 0; k < 8; k++) {
                    int ni = i + di[k];
                    int nj = j + dj[k];
                    if (ni >= 0 && ni < I && nj >= 0 && nj < J
                            && grid[i][j] == grid[ni][nj])
                        st.insert(grid[i][j]);
                }
        st.erase(-1);
        cout << st.size() << endl;
    }
    return 0;
}
