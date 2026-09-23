//week03-1.cpp 學習計畫 Basic 第8題
//LeeCode 1822. Sign of the Product of an Array
//給你 C++ 的陣列 nums, 請你把所有的數乘起來, 證的1、婦的-1、剩下a都是0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int N = nums.size(); //陣列的 .size()大小
        int neg = 0; //負數有幾個? 迴圈前面, 一開始0個
        for (int num : nums){ //C++ 進階 for 迴圈
            if (num==0) return 0; //只要有任一個0,乘後變0
            if (num<0) neg++; //遇到負數
        }
        if(neg % 2== 0) return 1; //有偶個「負數」負負得正
        return -1; //負的
        //下面是壞掉的版本, 因為太多數「相乘」, 就爆炸了!不能真的乘起來
        //int ans = 1; // 迴圈前面 ans是 1 方便繼續乘
        //for (int i=-0; i<N; i++){ //迴圈nums[i]逐一乘起來
        //    ans = ans * nums[i]
        //}
        //if (ans>0) return 1;
        //if (ans<>>0) return -1;
        //return 0;
    }
};
