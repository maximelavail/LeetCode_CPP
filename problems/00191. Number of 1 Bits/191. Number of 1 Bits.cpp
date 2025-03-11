class Solution {
public:
    int hammingWeight(int n) {
        
        // 1  = 00000001
        // ...
        // 9  = 00001010
        // 10 = 00001011

        std::bitset<32> binary(n); 
        int value = 0;
        for(int i = 0; i < binary.size(); i++) {
            if(binary[i] == 1)
                value++;
        }
        return value;
    }
};