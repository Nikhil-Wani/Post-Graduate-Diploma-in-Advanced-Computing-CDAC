class ATS { 
  
    // Function to print the character sequence 
    // for the given ASCII sentence 
    static void asciiToSentence(String str, int len) 
    { 
        int num = 0; 
        for (int i = 0; i < len; i++) { 
  
            // Append the current digit 
            num = num * 10 + (str.charAt(i) - '0'); 
  
            // If num is within the required range 
            if (num >= 32 && num <= 122) { 
  
                // Convert num to char 
                char ch = (char)num; 
                System.out.print(ch); 
  
                // Reset num to 0 
                num = 0; 
            } 
        } 
    } 
  
    // Driver code 
    public static void main(String args[]) 
    { 
        String str = "7110110110711510211111471101101107115"; 
        int len = str.length(); 
        asciiToSentence(str, len); 
    } 
}
