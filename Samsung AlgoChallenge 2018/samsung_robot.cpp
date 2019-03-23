#include <stdio.h>

int N;
char message[100001];
char presses[400001];

int solve(int N, char message[100001], char presses[400001]) {
    int a[26][2] = {{2, 1}, {2, 2}, {2, 3}, 
                    {3, 1}, {3, 2}, {3, 3}, 
                    {4, 1}, {4, 2}, {4, 3},
                    {5, 1}, {5, 2}, {5, 3},
                    {6, 1}, {6, 2}, {6, 3},
                    {7, 1}, {7, 2}, {7, 3}, {7, 4},
                    {8, 1}, {8, 2}, {8, 3}, 
                    {9, 1}, {9, 2}, {9, 3}, {9, 4}};
    int i = 0;
    for (int j = 0; j < N; ++j) {
        if (message[j] == ' ') {
            presses[i] = '0';
            ++i;
        } else {
            int x = message[j] - 97;
            for (int k = 0; k < a[x][1]; ++k) {
                presses[i] = a[x][0] + '0';
                ++i;
            }
        }
    }
    return i;
}

void get_input() {
    scanf("%d %s",&N,message);
}

int main() {
    int T;
    scanf("%d",&T);
    for(int case_num=1; case_num<=T; case_num++) {
        get_input();        
        int ret = solve(N, message, presses);
        printf("%d\n",ret);
        for(int i=0; i<ret; i++)
            printf("%c",presses[i]);
        printf("\n");
    }
    return 0;
}
