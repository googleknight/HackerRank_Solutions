//https://www.hackerrank.com/challenges/box-it
class Box  
{
    private:
        long long l,b,h;
    public:
    Box(): l(0),b(0),h(0){}
    Box(int l,int b,int h){this->l=l;this->b=b;this->h=h;}
    Box(Box &B)
    {
        this->l=B.getLength();
        this->b=B.getBreadth();
        this->h=B.getHeight();
    }
    long long getLength(){return l;}
    long long getBreadth(){return b;}
    long long getHeight(){return h;}
    public: long long CalculateVolume() // Return the volume of the box
    {
        return l*b*h;        
    }
    bool operator <(Box &A)
    {
        if(l<A.getLength())
            return true;
        else if(l==A.getLength() && b<A.getBreadth())
            return true;
        else if(l==A.getLength() && b==A.getBreadth() && h<A.getHeight()) 
            return true;
        else return false;
    }
    friend ostream& operator<<(ostream& out,const Box& B);
};
ostream& operator<<(ostream& out,const Box& B)
    {
        out<<B.l<<" "<<B.b<<" "<<B.h;
        return out;
    }
