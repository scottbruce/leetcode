class Solution {
public:
    int myAtoi(string str) {
        if(str.empty())
            return 0;
        
        int sign = 1;
        int sum = 0;
        int i = 0;
        int n = str.size();

        while(i < n && str[i] == ' ')
            ++i;
        
        if(i < n && (str[i] == '+' || str[i] == '-')){
            sign = (str[i] == '+') ? 1 : -1;
            i++;
        }

        while(i < n && str[i] >= '0' && str[i] <= '9'){
            if(sum > INT_MAX / 10 || (sum == INT_MAX / 10 && str[i] - '0' > 7 )){
                return (sign == 1)? INT_MAX : INT_MIN;
            }

            sum = sum * 10 + (str[i] - '0');
            i++;
        }

        return sign * sum;
    }
};
