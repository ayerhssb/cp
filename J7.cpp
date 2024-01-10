class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        int len = hours.size();
        for(int i=0; i< len; i++){
            if(hours[i] >= target){
                count++;
            }
            else{
                continue;
            }
        }
        return count;
    }
};
