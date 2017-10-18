#pragma once
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int maxAreaOfIsland(vector<vector<int>>& grid) {
	int ans = 0;
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[0].size(); j++) {
			if (grid[i][j] == 1) ans = max(ans, dfs(grid, i, j));
		}
	}
	return ans;
}

int dfs(vector<vector<int>>& grid, int row, int clo) {
	int m = grid.size(), n = grid[0].size(), area = 1;
	grid[row][clo] = 2;
	vector<int>dir({ -1,0,1,0,-1 });
	for (int i = 0; i < 4; i++) {
		int r = row + dir[i], c = clo + dir[i + 1];
		if (c >= 0 && c < n && n >= 0 && r < m && grid[r][c] == 1) {
			area += dfs(grid, r, c);
		}
	}
	return area;
}
 