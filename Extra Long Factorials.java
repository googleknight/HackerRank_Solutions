//https://www.hackerrank.com/challenges/extra-long-factorials
import java.io.*;
import java.util.*;
import java.math.BigInteger;
public class Solution {
public static BigInteger fact(BigInteger bg)
{
    if(bg.equals(new BigInteger("1")))
        return bg;
    else
        return bg.multiply(fact(bg.subtract(new BigInteger("1"))));
}
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        String str=sc.nextLine();
        BigInteger bg=new BigInteger(str);
        System.out.print(fact(bg));
    }
}
