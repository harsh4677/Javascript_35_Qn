class Solution {
public:
    int maxHeightOfTriangle(int r, int b) {
        int height1 = 0, height2 = 0;
        int index1 = 1, index2 = 1;
        int red1 = r, blue1 = b;
        int red2 = r, blue2 = b;
        bool flag1 = true, flag2 = false;

        while (true) {
            // Try starting with red first
            if (flag1) {
                if (red1 - index1 >= 0) {
                    red1 -= index1;
                    height1++;
                } else {
                    break;
                }
            } else {
                if (blue1 - index1 >= 0) {
                    blue1 -= index1;
                    height1++;
                } else {
                    break;
                }
            }
            index1++;
            flag1 = !flag1;
        }

        while (true) {
            // Try starting with blue first
            if (flag2) {
                if (red2 - index2 >= 0) {
                    red2 -= index2;
                    height2++;
                } else {
                    break;
                }
            } else {
                if (blue2 - index2 >= 0) {
                    blue2 -= index2;
                    height2++;
                } else {
                    break;
                }
            }
            index2++;
            flag2 = !flag2;
        }

        return std::max(height1, height2);
    }
};
