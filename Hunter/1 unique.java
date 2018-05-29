import java.util.*;
import java.lang.*;
public class uniq {
     public static void main(String aa[]){
     char d;
     int n;
     Scanner s=new Scanner(System.in);
     n=s.nextInt();
     ArrayList<Character>a=new ArrayList<Character>();
     for(int i=0;i<n;i++){
         d=s.next().charAt(0);
         a.add(d);
     }
     for(int i=0;i<n;i++){
         if(Collections.frequency(a, a.get(i))==1){
             System.out.print(a.get(i));
         }
     }

    }

}
