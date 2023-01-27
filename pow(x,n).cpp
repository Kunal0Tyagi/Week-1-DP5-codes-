class Solution {
public:
   double findPower(double base , int power) {
        if(power == 0) return 1;
        if(power == 1) return base;
        double ans = findPower(base , power/2);
        ans = ans*ans;
        if(power%2!=0)
        ans = base*ans;
        return ans;
    }
    double myPow(double x, int n) {
   


        if(n < 0) return 1.0/findPower(x , abs(n));

        return findPower(x , n);
    }
};
