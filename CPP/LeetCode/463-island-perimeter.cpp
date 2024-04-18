#include<vector>

class Solution {
public:
	int islandPerimeter(vector<vector<int>>& grid) {
		int sum = 0;
		for (int i = 0; i < grid.size(); i++) {
			for (int j = 0; j < grid[i].size(); j++) {
				if (grid[i][j] == 1) {
					sum += upWater(grid, i, j) + downWater(grid, i, j) + leftWater(grid, i, j) + rightWater(grid, i, j);
				}
			}
		}
		return sum;
	}

	int upWater(vector<vector<int>>& grid, int i, int j) {
		if (i == 0) {
			return 1;
		}
		if (grid[i - 1][j] == 0) {
			return 1;
		}
		return 0;
	}

	int downWater(vector<vector<int>>& grid, int i, int j) {
		if (i == grid.size() - 1) {
			return 1;
		}
		if (grid[i + 1][j] == 0) {
			return 1;
		}
		return 0;
	}

	int leftWater(vector<vector<int>>& grid, int i, int j) {
		if (j == 0) {
			return 1;
		}
		if (grid[i][j - 1] == 0) {
			return 1;
		}
		return 0;
	}

	int rightWater(vector<vector<int>>& grid, int i, int j) {
		if (j == grid[i].size() - 1) {
			return 1;
		}
		if (grid[i][j + 1] == 0) {
			return 1;
		}
		return 0;
	}

};