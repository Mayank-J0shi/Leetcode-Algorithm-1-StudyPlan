class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int l=1,r=n;
        while(l<=r){
            int mid=(l+r)/2;
            if(isBadVersion(mid)==true){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};