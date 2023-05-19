#ifndef LongInt
#define LongInt

#define UPPER_BOUND 30
#define LOWER_BOUND 0

class longInt{
    private:
        int digits[UPPER_BOUND];
    public:
        void setDigit(int, int);
        int getDigit(int);
        int longIntToInt();
        static longInt intToLongInt(int);    
        longInt sum(longInt);
        longInt subtract(longInt);
        longInt();
        longInt(int[30]);
        longInt(const longInt&);
        ~longInt();
};

#endif