class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor) return image;
        helper(image, sr, sc, image[sr][sc], newColor);
        return image;
    }

    void helper(vector<vector<int>> &image, int i, int j, int color, int newColor)
    {
    	int m = image.size(), n = image[0].size();
    	if(i < 0 || i >= m || j < 0 || j >= n || image[i][j] != color) return;
    	image[i][j] = newColor;
    	helper(image, i + 1, j, color, newColor);
    	helper(image, i, j + 1, color, newColor);
    	helper(image, i - 1, j, color, newColor);
    	helper(image, i, j - 1, color, newColor);
    }
};