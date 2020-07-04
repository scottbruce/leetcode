class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1)
            return s;

        #行间隔公式 2*numRows - 2
        int size = 2*numRows - 2;
        int n = s.size();
        string res;

        for(int i = 0; i < numRows; ++i){
            for(int j = i; j < n; j+=size){
                res += s[j];
                #之字中间值公式 j + 2*numRows-2 - 2*i
                int pos = j + size - 2*i;
                if(i != 0 && i != numRows - 1 && pos < n)
                    res += s[pos];
            }
        }

        return res;
    }
};
