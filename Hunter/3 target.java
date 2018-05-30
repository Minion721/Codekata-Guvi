import java.util.*;
import java.math.*;
class checke{
    public static void main(String aa1[]){
        int l,m=0;
       Scanner s=new Scanner(System.in);
       int n=s.nextInt();
       int ll=s.nextInt();
       ArrayList<Integer>aa=new ArrayList<Integer>();
       int a[]=new int[n];
       for(int i=0;i<n;i++){
           a[i]=s.nextInt();
       }
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               if(a[i]+a[j]==ll){
                   m=1;
                   System.out.println("yes");
                   break;
               }
           }
       }
       if(m==0){
           System.out.println("no");
       }
       
    }
}
