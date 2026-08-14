class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int>populationChanges(101,0);
        for (const auto& log : logs) {
            populationChanges[log[0] - 1950]++; 
            populationChanges[log[1] - 1950]--; 
        }
        int maxPopulation = 0;
        int earliestYear = 1950;
        int currentPopulation = 0;
        for (int i = 0; i < 101; ++i) {
            currentPopulation += populationChanges[i];
            
            if (currentPopulation > maxPopulation) {
                maxPopulation = currentPopulation;
                earliestYear = 1950 + i;
            }
        }
        return earliestYear;
    }
};