#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define FOD(i, a, b) for (int i = (a); i >= (b); i--)
#define ll long long
#define PI 3.14
#define MOD 1000000007

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n; cin >> n;
    stack<int> st;
    cin.ignore();
    while (n--) {
        string s;
        getline(cin, s);
        if(s == "top"){
            if(!st.empty()) {
                cout << st.top() << endl;
            }
        }
        else if(s == "pop") {
            if(!st.empty()) {
                st.pop();
            }
        }
        else {
            int x = stoi(s.substr(5));
            st.push(x);
        }
    }
}
