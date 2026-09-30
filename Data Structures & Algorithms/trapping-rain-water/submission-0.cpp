class Solution {
public:
    int trap(vector<int>& height) {

        int size = height.size();
        vector<int> containers;
        int count = 0;
        int totalArea = 0, minusArea = 0;

        int leftBoundary = 0;
        int rightBoundary = height.size() - 1;

        while (leftBoundary < height.size() - 1 && height[leftBoundary] <= height[leftBoundary + 1]) {
            leftBoundary++;
        }

        while (rightBoundary > 0 && height[rightBoundary] <= height[rightBoundary - 1]) {
            rightBoundary--;
        }

        //cout << rightBoundary << "<- right\n" << leftBoundary << "<-- left\n";


        for (int i = leftBoundary; i < rightBoundary; i++){
            
            //cout << height[i];
            if (height[i] > height[i+1] && count % 2 == 0)  {
                containers.push_back(i);
                ////cout << "   &";        
                count++;
            }

            else if(height[i] < height[i+1] && count % 2 == 1){
                count++;
            }

            else if((height[i] > height[i+1] && count % 2 == 1) || (height[i] < height[i+1] && count % 2 == 0)){
                totalArea -= height[i];
                //cout << " minus --> " << height[i] << endl;
            }

            //cout << endl;
        }

        containers.push_back(rightBoundary);

        //cout << endl << endl;

        for (int i = 0; i < containers.size(); i++){
            //cout << containers[i] << endl;
        }

        //cout << "MInus Area " << totalArea << endl;

        for (int i = 0; i < containers.size() - 1; i++){

            int left = containers[i], right = containers[i+1];

            if (left < right){
                totalArea +=  height[left] * (right - left - 1);
                ////cout << height[left] << "    " << totalArea << endl;
            }

                
            else{
                totalArea +=  height[right] * (right - left - 1);
                ////cout << height[right] << "    " << totalArea << endl;
            }
                
        }

        return totalArea;

    }

};
