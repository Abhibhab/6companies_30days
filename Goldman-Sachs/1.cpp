#define ll long long
class Solution {
public:
    int minimizeSet(ll div1, ll div2, int Cnt1, int Cnt2) {
        ll ans=0;
        ll total=Cnt1+Cnt2;
        ll low=total,high=1e12;
        ll lcm=(div1*div2)/(__gcd(div1,div2));
        while(low<=high){
            ll mid=low+((high-low)/2);
            ll both=mid/lcm;
            ll onlyA=mid/div2 -both;
            ll onlyB=mid/div1-both;
            total=max(0ll,Cnt1-onlyA)+max(0ll,Cnt2-onlyB);
            if(mid-onlyA-onlyB>=total+both){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;


        
    }
};
