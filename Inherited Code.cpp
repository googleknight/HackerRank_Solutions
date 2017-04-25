//https://www.hackerrank.com/challenges/inherited-code
class BadLengthException:public exception{
    public:
    int n;
    BadLengthException(int n){this->n=n;}
     string what() throw()
    {    
        return to_string(n);
    }
};
