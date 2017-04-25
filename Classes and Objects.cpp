//https://www.hackerrank.com/challenges/classes-objects
class Student
{
    private:
        int marks[5];
    public:
        void input()
        {
            for(int i=0;i<5;i++)
                cin>>marks[i];            
        }
        int calculateTotalScore()
        {
            int sum(0);
            for(auto x:marks)
                sum+=x;
            return sum;
        }  
};
