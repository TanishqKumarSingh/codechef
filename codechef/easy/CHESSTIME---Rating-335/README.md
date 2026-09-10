# CHESSTIME - Rating 335

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-10T14:42:30.483Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<=70)
	    cout<<0<<endl;
	    else if(x>70 && x<=100)
	    cout<<500<<endl;
	    else
	    cout<<2000<<endl;
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/CHESSTIME)