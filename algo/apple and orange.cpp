#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    long int count_apple=0,count_orange=0;
    for(int apple_i = 0;apple_i < m;apple_i++){
       //if(apple[apple_i]>=0)
       //{
           if(apple[apple_i]+a>=s && apple[apple_i]+a<=t)
               count_apple++;
       //}
    }
    for(int orange_i = 0;orange_i < n;orange_i++){
       //if(orange[orange_i]<=0)
       //{
           if(orange[orange_i]+b<=t && orange[orange_i]+b>=s)
               count_orange++;
       //}    
    }
    cout<<count_apple<<"\n"<<count_orange;
    return 0;
}
