/*
 * USER: 
 * ALGO:
 * TASK:
 */

#include <bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int

using namespace std;

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

int main(int argc, char *argv[]) {
    return 0;
}
