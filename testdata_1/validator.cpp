#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <math.h>
#include <assert.h>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <iostream>
#include <functional>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <bitset>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int n = inf.readInt(1, 12, "n");
    inf.readEoln();
    int chk[20] = {};
    for(int i=0;i<n;i++) {
        int idx = inf.readInt(0, n-1, "idx");
        inf.readSpace();
        int fs = inf.readInt(0, 1, "finalState");
        inf.readSpace();
        string s = inf.readToken("[0-9,-]+");
        inf.readSpace();
        ensuref((int)s.size() < 100, "string size");
        s = inf.readToken("[0-9,-]+");
        inf.readSpace();
        ensuref((int)s.size() < 100, "string size");
        s = inf.readToken("[0-9,-]+");
        inf.readEoln();
        ensuref((int)s.size() < 100, "string size");
    }
    inf.readEof();
}
