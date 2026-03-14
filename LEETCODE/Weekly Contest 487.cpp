3827. Count Monobit Integers
class Solution {
public:
    bool isBinC(int n){
        int d,o=0,z=0;
        while(n>0){
            d=n%2;
            if(d==0){z++;}
            else{o++;}
            n=n/2;
        }
        if(z>0&&o>0){return false;}
        return true;
    }
    int countMonobit(int n) {
        int c=0;
        for(int i=0;i<=n;i++){
            if(isBinC(i)){
                c++;
            }
        }
        return c;
    }
};

3829. Ride Sharing
class RideSharingSystem {
public:
    deque<int>driver;
    deque<int>rider;
    int delta=0;
    RideSharingSystem() {
        int riderId=0,driverId=0;
    }
    
    void addRider(int riderId) {
        rider.push_back(riderId);
    }
    
    void addDriver(int driverId) {
        driver.push_back(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        int x,y;
        if(rider.size()==0||driver.size()==0){
            return {-1,-1};
        }
        else{
            x= rider.front();
            y = driver.front();
            rider.pop_front();
            driver.pop_front();
        }
        return {y,x};
    }
    
    void cancelRider(int riderId) {
        for(int i=0;i<rider.size();i++){
            if(rider[i]==riderId){
                rider.erase(rider.begin()+i);
                break;
                }
        }
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */
