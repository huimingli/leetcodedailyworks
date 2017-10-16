#include<iostream>
#include<vector>
using namespace std;
int islandPerimeter(vector<vector<int>>& grid) {
	int sum = 0;
	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[i].size(); j++) {
			if (grid[i][j] == 1) {
				sum += 4;
				if (i - 1 >= 0 && grid[i - 1][j] == 1) {
					sum -= 1;
				}
				if (i + 2 <= grid.size() && grid[i + 1][j] == 1) {
					sum -= 1;
				}
				if (j - 1 >= 0 && grid[i][j - 1] == 1) {
					sum -= 1;
				}
				if (j + 2 <= grid[i].size() && grid[i][j + 1] == 1) {
					sum -= 1;
				}
			}
		}
	}
	return sum;
}

