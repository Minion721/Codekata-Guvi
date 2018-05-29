import java.util.*;
import java.lang.*;
public class sums{
     public static void main(String aa[]){
     int nm;
     Scanner s=new Scanner(System.in);
     nm=s.nextInt();
     int a[]=new int[nm];
     for(int i=0;i<nm;i++){
         a[i]=s.nextInt();

     }
    for(int i=0;i<nm;i++){
        for(int j=0;j<nm;j++){
            for(int k=0;k<nm;k++){
                if(a[i]+a[j]==a[k]){
                    System.out.printf("%d %d %d\n", a[i],a[j],a[k]);
                }
            }
        }
    }

    }

}
