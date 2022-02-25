//Power of 2
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && not(n & n-1);
    }
};

//Power of 3
class Solution {
public:
    bool isPowerOfThree(int n) {
    if(n>1)
        while(n%3 == 0) 
            n /= 3;
    return n == 1;       
    }
};

//Power of 4
class Solution {
public:
    bool isPowerOfFour(int n) {
      if(n>1)
      {
          while(n%4==0)
              n/=4;
      }
        return n==1;
    }
};
