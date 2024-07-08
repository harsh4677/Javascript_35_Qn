class Solution {
public:
    int maxHeightOfTriangle(int r, int b) {
        int height1=0;
        int index=1;
        int red=r,blue=b;
        bool flag=true;
        while(true){
            if(flag){
                if((red-index)>=0){
                    red -=index;
                    index++;
                    height1++;
                    flag=!flag;
                }
                else{
                    break;
                }
            }
            else{
                if((blue-index)>=0){
                    blue -=index;
                    index++;
                    height1++;
                    flag=!flag;
                }
                else{
                    break;
                }
            }
        }
        
        
        
       int height2=0;
        index=1;
        flag=false;
         red=r,blue=b;
        while(true){
            if(flag){
                if((red-index)>=0){
                    red -=index;
                    index++;
                    height2++;
                    flag=!flag;
                }
                else{
                    break;
                }
            }
            else{
                if((blue-index)>=0){
                    blue -=index;
                    index++;
                    height2++;
                    flag=!flag;
                }
                else{
                    break;
                }
            }
        }
        return max(height1,height2);
    }
};
