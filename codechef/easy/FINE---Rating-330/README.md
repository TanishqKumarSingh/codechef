# FINE - Rating 330

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-10T14:37:11.556Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b && a>c)
        cout<<"Alice"<<endl;
        else if(c>a && b<c)
        cout<<"Charlie"<<endl;
        else
        cout<<"Bob"<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FINE)