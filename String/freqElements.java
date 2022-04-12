//frequency of letters (input consists entirely of small letters)
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine(); 
        int[] count = new int[26];
        //traversing through the string 
        for(int i=0; i<str.length(); i++)
        {
            count[str.charAt(i)-'a']++;
        }
        //traversing through the count array
        for(int i=0; i<26; i++){
            if(count[i]>0){
                System.out.println((char)(i+'a')+" -> "+count[i]);
            }
        }
    }
}
