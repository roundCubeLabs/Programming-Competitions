/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tidynumbers;


import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.math.BigInteger;

/**
 *
 * @author Usama Moin
 */
public class TidyNumbers {

    public static void main(String[] args) throws FileNotFoundException,IOException {
        
        BufferedReader buffReader = new BufferedReader(new FileReader("B-large (1).in"));
        PrintWriter printWriter = new PrintWriter("large.txt");
        
        int T = Integer.parseInt(buffReader.readLine());
        
        for (int z = 1; z <= T; z++) {
            BigInteger b = new BigInteger(buffReader.readLine());
            for (BigInteger i=b; i.compareTo(BigInteger.ZERO)>=0; i=i.subtract(BigInteger.ONE)) {
                String str = i+"";
                int index = comparer(str);
                if(index == -1){
                    
                    System.out.println("Case #"+z+": "+i);
                    
                    printWriter.print("Case #"+z+": "+i);
                    
                    printWriter.println();
                    
                    break;
                }
                else {
                    
                    i = i.subtract(new BigInteger(str.substring(index)));
                }
            }
        }
        
        
        printWriter.close();
    }

    public static int comparer(String s) {
        
        for (int i = s.length() - 1; i >= 1; i--) {
        
            if (s.charAt(i) < s.charAt(i - 1)) {
            
                return i;
            
            }
        
        }
        
        return -1;
    
    }
}
