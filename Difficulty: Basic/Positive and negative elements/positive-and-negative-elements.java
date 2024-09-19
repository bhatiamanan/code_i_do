//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.lang.*;
import java.util.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());

        while (t-- > 0) {

            ArrayList<Integer> array1 = new ArrayList<Integer>();
            String line = read.readLine();
            String[] tokens = line.split(" ");
            for (String token : tokens) {
                array1.add(Integer.parseInt(token));
            }
            ArrayList<Integer> v = new ArrayList<Integer>();

            v = new Solution().arranged(array1);

            for (int i = 0; i < v.size(); i++) System.out.print(v.get(i) + " ");

            System.out.println();
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    ArrayList<Integer> arranged(ArrayList<Integer> arr) {
        // code here
        List<Integer> positive = new ArrayList<>();
        List<Integer> negative = new ArrayList<>();
        
        for(int num : arr) {
            if(num>=0) {
                positive.add(num);
            }
            else {
                negative.add(num);
            }
        }
        
        ArrayList<Integer> result = new ArrayList<>();
        
        for(int i=0; i<positive.size(); i++) {
            result.add(positive.get(i));
            result.add(negative.get(i));
        }
        
        return result;
    }
}
