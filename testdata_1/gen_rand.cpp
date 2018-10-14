#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "testlib.h"

using namespace std;
int N;

void output_v(double pos) {
    vector <int> v;
    for(int i=0;i<N;i++) if(rnd.next() < pos) v.push_back(i);
    if((int)v.size() == 0) printf(" -");
    else {
        printf(" %d", v[0]);
        for(int i=1;i<(int)v.size();i++) {
            printf(",%d", v[i]);
        }
    }
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    if(argc < 6) {
        puts("usage : ./gen_rand N pf t0 t1 te");
        return 0;
    }
    N = atoi(argv[1]);
    ensuref(1 <= N && N <= 12, "N range");
    double pf = atof(argv[2]);
    int finalSet = 0;
    for(int i=0;i<N;i++) {
        if(rnd.next() < pf) finalSet |= 1<<i;
    }
    if(finalSet == 0) finalSet |= 1<<rnd.next(N);
    double t0 = atof(argv[3]);
    double t1 = atof(argv[4]);
    double te = atof(argv[5]);
    int perm[20];
    for(int i=0;i<N;i++) perm[i] = i;
    shuffle(perm, perm + N);
    printf("%d\n", N);
    for(int i=0;i<N;i++) {
        int idx = perm[i];
        printf("%d %d", idx, !!(finalSet & 1<<idx));
        output_v(t0);
        output_v(t1);
        output_v(te);
        puts("");
    }
    return 0;
}
