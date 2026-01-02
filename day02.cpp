class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //base condtion
        if(digits.size() == 1){
            if(digits[digits.size()-1] == 9){
                return {1,0};
            }
            digits[digits.size() -1] ++ ;
            return digits;
        }
        //other cases - generic solution
        int i = digits.size()-1;
        while(i>=0){
            if(digits[i] == 9){
                digits[i] = 0;
                i--;continue;

        }


            if((i+1)  && digits[i] < 9){
                digits[i] ++;
                return digits;

            }
             i--;
        }

        //new1.insert(new1.end(), digits.begin(), digits.end());
        digits.insert(digits.begin(), 1);
       return digits;


    }
};
