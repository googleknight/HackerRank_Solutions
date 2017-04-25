//https://www.hackerrank.com/challenges/2d-array
import java.io.*;
import java.util.*;
public class Solution {
    public static void main(String[] args) {
        int max=Integer.MIN_VALUE;
        int [][]a=new int[6][6];
        Scanner read=new Scanner(System.in);
        for(int i=0;i<6;i++)
            for(int j=0;j<6;j++)
                a[i][j]=read.nextInt();
        int sum=0;
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
            {
                sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
                if(sum>max)
                    max=sum;            
            }
        System.out.println(max);
    }
}
