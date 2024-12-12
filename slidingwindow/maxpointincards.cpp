class Solution {
public:
    int maxScore(vector<int>& cardPoint, int k) {
        int n = cardPoint.size();
        int lsum =0, rsum =0, maxsum =0;
        for(int i=0;i<k;i++){
            lsum += cardPoint[i];
        }
        maxsum = lsum;
        int r = n-1;
        for(int i=k-1;i>=0;i--){
            lsum -=cardPoint[i];
            rsum +=cardPoint[r];
            maxsum = max(maxsum,lsum+rsum);
            r--;
        }
        return maxsum;
    }
};
