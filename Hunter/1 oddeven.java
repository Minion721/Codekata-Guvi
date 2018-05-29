import java.util.*;
import java.lang.*;
public class odde{
     public static void main(String aa[]){
     int nm;
     Scanner s=new Scanner(System.in);
     nm=s.nextInt();
     int a[]=new int[n];
     for(int i=0;i<nm;i++){
         a[i]=s.nextInt();
         
     }
     for(int i=0;i<nm;i++){
         if(i%2==0){
             if(a[i]%2!=0){
                 System.out.print(a[i]);
             }
         }
         else if(i % 2 != 0)
         {
             if(a[i]%2==0){
                 System.out.println(a[i]);
             }
         }
     }

    }

}
