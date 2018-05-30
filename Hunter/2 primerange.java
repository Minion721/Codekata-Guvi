import java.util.*;
import java.math.*;
class range{
    public static void main(String aa[]){
        int d,i;
        int y=0;
        Scanner s=new Scanner(System.in);
        d=s.nextInt();
        int b=s.nextInt();
        for( i=d;i<=b;i++){
            for(int j=2;j<i;j++){
                if(i%j==0){
                    y=1;
                }
            }
            if(y==0){
                String ss=String.valueOf(i);
            BigInteger v=new BigInteger(ss);
            int u=v.bitCount();
                if(u%2!=0){
                    System.out.println(u);
                }
            }
            y=0;
        }
    }
}
