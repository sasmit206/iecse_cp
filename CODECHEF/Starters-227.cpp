A> Bank Glitch
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T){
        int A,B,X,Y;
        cin>>A>>B>>X>>Y;
        cout<< (A/X)*Y+(A%X)+B <<endl;
        T--;
    }
}

B> Buying Tickets
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N>>K;
        vector<int>arr;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }
        string S;
        cin>>S;
        int idx=0;
        int ans=0;
        vector<int>available;
        while(idx<S.size()){
            if(S[idx]=='0'){
                available.push_back(arr[idx]);
            }
            idx++;
        }
        if(available.size()<K){cout<<-1<<endl;}
        else{
            sort(available.begin(),available.end());
            int q=0;
            int i=0;
            while(K){
                q+=available[i];
                i++;
                K--;
            }
            cout<<q<<endl;
        }
    }
}

C> Erase And Maximise
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--){
        int N,S;
        cin>>N>>S;
        if(S<=5*N){
            cout<<6*N<<endl;
            continue;
        }
        cout<<6*N-(S-5*N)<<endl;
    }
}

This contest was the reason that I lost my 2 stars 
