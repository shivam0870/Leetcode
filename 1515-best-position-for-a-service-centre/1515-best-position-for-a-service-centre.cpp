class Solution {
public:
	// Find Euclidean distance
    double find(double x, double y, vector<vector<int>> &p) {
        double mind = 0;
        for(int i=0;i<p.size();i++) {
            double a = p[i][0], b=p[i][1];
            mind += sqrt((x-a)*(x-a) + (y-b)*(y-b));
        }
        return mind;
    }
    double getMinDistSum(vector<vector<int>>& p) {
        // Find centroid
		double x = 0, y = 0;
        for(int i=1;i<p.size();i++) {
            x+=p[i][0];
            y+=p[i][1];
        }
        x = x/p.size();
        y = y/p.size();
        
        // Find min-distance
        double mind = find(x,y,p);
        
        double limit = 1e-8;
		// Value of (x,y) will be as accurate as this "limit"
		// BUT our "min distance" should be as accurate as 1e-5 according to the question
        // So, we need to use a value lower than 1e-5, 1e-8 works fine
        
        double step = 100; 
        // Since our 2D space is bounded between 0 to 100
        
        
        while (step>limit) { 
			// Move in 4 directions in the 2D space
			double dxy[][2] = {{-1.0,0.0},{1.0,0.0},{0.0,-1.0},{0.0,1.0}};
            
			bool update = false;
            for(int i=0;i<4;i++) {
				// Calculate newx and newy, by moving "step" times in some direction
                double nx = x + step*dxy[i][0];
                double ny = y + step*dxy[i][1];
                double nmind = find(nx,ny,p);
                if (nmind < mind) { 
					// Update values
                    mind = nmind,x=nx,y=ny;
					update = true;
                    break;
                }
            }
			// If (x,y) are not updated, move on to the next decimal place
            if(update == false)
                step/=10;
        }
        return mind;
    }
};