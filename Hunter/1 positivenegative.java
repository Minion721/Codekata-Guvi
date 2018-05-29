import java.util.*;
import java.lang.*;
public class positivenegative{
     public static void main(String aa[]){
     int nm;
     Scanner s=new Scanner(System.in);
     nm=s.nextInt();
     int a[]=new int[nm];
     for(int i=0;i<nm;i++){
         a[i]=s.nextInt();

     }
     LinkedHashSet<Integer>b=new LinkedHashSet<Integer>();
    for(int i=0;i<n;i++){
        for(int j=0;j<nm;j++){
            if(a[i]+a[j]==0){
             b.add(a[i]);
             b.add(a[j]);

            }
        }
    }
     for(int j:b){
         System.out.printf("%d ",j);
     }

    }

}
