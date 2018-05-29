package javastrings.java;

import java.util.Scanner;

public class reverseorderofwords {

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		String s12=sc.nextLine();
		//int n=s12.length();
		String[] str=s12.split("\\s");
		int n1=str.length;
		for(int i=n1-1;i>=0;i--)
		{
			System.out.print(str[i]+" ");
		}
		sc.close();
	}

}
