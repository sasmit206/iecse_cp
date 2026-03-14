A> Ice Cream Cones
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T){
        int tot,min,qt;
        cin>>tot>>min>>qt;
        if(tot<min*qt){cout<<0<<endl;}
        else{cout<<tot-min*qt<<endl;}
        T--;
    }
}

B> Sub A Sub B
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int T;
    cin >> T;
    while (T) {
        int N, A, B;
        cin >> N >> A >> B;
        while (N >= A) {
            N=N-(A-B);
        }

        cout << N << endl;
        T--;

    }
}

C> Min Distinct
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        unordered_map<int, int> freq;
        for (int x : A) {
            freq[x]++;
        }
        int d = freq.size();
        int fv = A[0];

        vector<int> rf;

        for (auto &p : freq) {
            if (p.first != fv) {
                rf.push_back(p.second);
            }
        }

        sort(rf.begin(), rf.end());

        for (int f : rf) {
            if (K >= f) {
                K -= f;
                d--;
            } else {
                break;
            }
        }

        cout << d << "\n";
    }

    return 0;
}

D> Max Minus Min (ended up failing on a TLE ig ;_;)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> a(N);

        for (int i = 0; i < N; i++) {
            cin >> a[i];
            while (a[i] % 2 == 0)
                a[i] /= 2;  
        }

        long long ans = LLONG_MAX;

        while (true) {
            sort(a.begin(), a.end());
            long long mn = a[0];
            long long mx = a[N - 1];
            ans = min(ans, mx - mn);
            if (mn > mx) break;
            a[0] *= 2;
            if (a[0] > 2e10) break;
        }

        cout << ans << "\n";
    }
}

