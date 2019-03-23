#include <stdio.h>

int N;
int A[100000];

int solve(int N, int A[100000]) {
    long long sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += A[i];
    }
    return sum / N;
}

void get_input() {
    scanf("%d",&N);
    for(int i=0; i<N; i++)
        scanf("%d",&A[i]);
}

int main() {
    int T;
    scanf("%d",&T);
    for(int case_num=1; case_num<=T; case_num++) {
        get_input();
        int ret = solve(N,A);
        printf("%d\n",ret);
    }
    return 0;
}
