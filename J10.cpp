class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       map<int, int> lostCount;

       for(auto i:matches){
           int pWin= i[0] , pLost = i[1];
           if(lostCount.find(pWin) == lostCount.end()){
               lostCount[pWin] = 0;
           }
           ++lostCount[pLost];
       }

       vector<int> zeroLost, oneLost;
       for(auto i:lostCount){
           if(i.second == 0){
               zeroLost.push_back(i.first);
           }
           if(i.second == 1){
               oneLost.push_back(i.first);
           }
       }

       return {zeroLost, oneLost};
       
       
        // int sizematches = matches.size();
        // vector<vector<int>> answer;
        // for(int i=0;i<sizematches;i++){           
        //     for(int j=i+1; j<sizematches;j++){
        //          if(matches[i][0] != matches[j][1]){
        //             int ans = matches[i][0];
        //             answer[0].push_back(ans);
        //             break;
        //         }
        //     }
        //     for(int j=i+1; j<sizematches;j++){
        //         if(matches[i][1] != matches[j][1]){
        //         answer[1].push_back(matches[i][1]);
        //         break;
        //         }
        //     }
            
        // }

        // for(int i = 0; i<2; i++){
        //     if(answer[i].empty()){
        //         return {};
        //     }
        //     else return answer;
        // }
        // return answer;
    }
};
