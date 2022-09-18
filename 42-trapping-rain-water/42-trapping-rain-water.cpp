class Solution {
public:
    int trap(vector<int>& height) {
       int n = height.size();
  if(n <= 2) return 0;
  int lmax = height[0], rmax = height[n-1];
  int l = 1, r = n-2;

  int water = 0;
  while(l <= r)
  {
    if(lmax < rmax)
    {
      if(height[l] < lmax)
      water += lmax - height[l++];
      else lmax = height[l++];
    }
    else
    {
      if(height[r] < rmax)
      water += rmax - height[r--];
      else rmax = height[r--];
    }
  }
  return water; 
    }
};