import java.util.*;
import java.io.*;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String name = input.next();
        String temp = "";
        int count = 0;
        for(int i = 0; i < name.length(); i++) {
            if(!temp.contains(String.valueOf(name.charAt(i)))){
                temp += name.charAt(i);
                count++;
            }
            else
                continue;
        }
        if(count % 2 == 0){
            System.out.println("CHAT WITH HER!");
        }
        else
            System.out.println("IGNORE HIM!");
    }
}