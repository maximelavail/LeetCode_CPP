class Solution {
public:
    int majorityElement(vector<int>& nums) {
    
        double m = nums.size() / 2;
        int nb_rep;
        int temp;

        for (int i = 0; i < nums.size(); i++) {
            // boucle itération chiffres par chiffres (qui parcours le tableau)
            temp = nums[i];
            nb_rep = 0;    
            
            for (int c = 0; c < nums.size(); c++) {
                
                // boucle itération (qui parcours le tableau) pour trouver le nombre de rép

                if (temp == nums[c]){
                    // caractères trouvé au moins une fois
                    nb_rep++;
                }
                
                if (nb_rep > m) return temp;
            }
        }
        return 0;
    }
};