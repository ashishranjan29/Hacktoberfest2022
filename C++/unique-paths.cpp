//Nmae: Ashish Ranjan
//Language: C++

class Solution {
public:
    int uniquePaths(int m, int n) {
        
        
        double ans=1;
        
        for(int i = 1; i < m; i++)
        {
            ans = ans * (n - 1 + i) / i;
        }
        return (int)ans;
    }
};
