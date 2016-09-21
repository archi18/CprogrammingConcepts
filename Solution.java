package com.iit;
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	public static void main(String[] args) {
		 Scanner scan= new Scanner(System.in);
	        System.out.println("Hi Jeevika");
	        int t= scan.nextInt();
	        String[] str= new String[t];
	        for(int i=0; i<t; i++){
	            str[i] = scan.next();
	        }
	        
	        for(int i=0; i<t; i++){
	            String evenStr="";
	            String oddStr="";
	            
	            for(int j=0; j<str[i].length(); j++){
	                if(j%2==0)
	                    evenStr +=str[i].charAt(j);
	                else
	                    oddStr +=str[i].charAt(j);
	            }
	            
	            System.out.println(evenStr+"  "+oddStr);
	        }
	}
}