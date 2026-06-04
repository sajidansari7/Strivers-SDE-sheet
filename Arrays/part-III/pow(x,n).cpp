class Solution {
public:
 double findPower(double base ,long long exponent){
    double ans=1.0;
    while(exponent>0){
        if(exponent&1) ans=ans*base;
        base=base*base;
        exponent=exponent>>1;
    }
    return ans;
 }
    double myPow(double x, int n) {
        
       double  base=abs(x);
       long long  exponent=abs((long long)n);
        double ans=findPower(base,exponent);
        
            
             if(x<0 && exponent%2==1) ans=-ans;

            if(n<0) ans=1.0/ans;

            return ans;
            
        
    }
};
