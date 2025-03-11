class Solution {
public:
    string defangIPaddr(string address) {
        string def_address = "";

        for(char i: address) {
            if (i == '.')
                def_address += "[.]";
            else def_address += i;
        }

        return def_address;
    }
};