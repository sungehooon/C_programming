#include <iostream>//Input/Output Stream(����� ��Ʈ��)

using namespace std;
int dp[41];
int main() {
    //1003
    int n, x1, x2, y1, y2;
    int nn, cnt, cx, cy, cr;
    int da, db, sqrcr;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cnt = 0;
        cin >> x1 >> y1 >> x2 >> y2 >> nn;
        for (int j = 0; j < nn; j++) {
            cin >> cx >> cy >> cr;
            da = (x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy);
            db = (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy);
            sqrcr = cr * cr;
            if (da < sqrcr && db < sqrcr) continue;
            else if (da < sqrcr || db < sqrcr) cnt++;
        }
        cout << cnt << '\n';
    }


}
   
