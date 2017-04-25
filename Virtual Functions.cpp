//https://www.hackerrank.com/challenges/virtual-functions
class Person{
    public: char name[200];
    int age;
    virtual void getdata(){}
    virtual void putdata(){}
};
class Professor:public Person{
    public: int publications,cur_id;
    static int count;
    void getdata()
    {
        scanf("%s%d%d",name,&age,&publications);
        cur_id=++count;
    }
    void putdata()
    {
        printf("%s %d %d %d\n",name,age,publications,cur_id);
    }
};
class Student:public Person{
    public:
        int marks[6];
        int cur_id;
        int sum;
        static int count;
    void getdata()
    {
        cur_id=++count;
        scanf("%s%d",name,&age);
        sum=0;
        for(int i=0;i<6;i++)
        {
            scanf("%d",&marks[i]);
            sum+=marks[i];
        }
    }
    void putdata()
    {
        printf("%s %d %d %d\n",name,age,sum,cur_id);
    }
};
int Student::count=0;int Professor::count=0;
