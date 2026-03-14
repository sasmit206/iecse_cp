A> Payment Scheme

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
    cin>>x;
    int c1=100+(4*x);
    //cout<<c1;
    if(c1<300){cout<<c1;}
    else{cout<<300;}
}

B> All Even

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int itr,n;
    cin>>itr;
    while(itr){
        cin>>n;
        vector<int>v;
        while(n){
            int ip;
            cin>>ip;
            v.push_back(ip);
            n--;
        }
        //for(auto it:v){cout<<it<<endl;}
        for(int i=v.size()-1;i>=1;i--){
            if(v[i]%2==1){v[i-1]=v[i-1]+v[i];}
            v.erase(v.end()-1);
        }
        int f=1;
        for(auto it:v){
            if(it%2==1){
                cout<<"NO"<<endl;
                f=0;
            }
        }
        if(f==1){cout<<"YES"<<endl;}
        itr--;  
    }
}


C> Maxiumum Score
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int itr;
    cin>>itr; //no of iterations
    while(itr){
        int n; //no of opponents
        vector<int>a;
        vector<int>b;
        cin>>n; 
        int sz=n;
        int x;
        while(n){
            cin>>x;
            a.push_back(x);
            n--;
        }
        n=sz;
        while(n){
            cin>>x;
            b.push_back(x);
            n--;
        }
        
        int delta=INT_MAX;
        int flag=0;
        for(int i=0;i<sz;i++){
            if(a[i]-b[i]<delta){
                delta=a[i]-b[i];
                //cout<<delta<<endl;
                flag=i;
            }
        }
        int sum=0;
        for(int i=0;i<sz;i++){
            if(i!=flag){sum+=a[i];}
            else{sum+=b[i];}
            //cout<<a[i];
        }
        itr--;
        cout<<sum<<endl;
    }
    
}

D> Plus Minus Split
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T){
        int n;
        cin>>n;
        int sz=n;
        vector<int>v;
        int X;
        while(n){
            cin>>X;
            v.push_back(X);
            n--;
        }
        int cnt=0;
        for(auto it:v){
            if(abs(it)==abs(v[0])){cnt++;}
        }
        if(cnt==sz){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        T--;
    }
}

