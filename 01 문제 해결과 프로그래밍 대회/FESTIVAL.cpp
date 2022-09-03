#include <stdio.h>

int main()
{
    int c;

    scanf("%d", &c);
    while(c--) {
        int n, l;
        int cost[1000] = {};
        double ans = 100;

        scanf("%d %d", &n, &l);
        for(int i=0; i<n; i++) {
            scanf("%d", &cost[i]);
        }

        for(int i=0; i<n; i++) {
            int sum = 0;
            for(int j=i; j<n; j++) {
                sum += cost[j];
                if(j-i+1 >= l) {
                    double res = (double)sum / (j-i+1);
                    ans = ans > res ? res : ans;
                }
            }
        }
        printf("%.8lf\n", ans);
    }
}
