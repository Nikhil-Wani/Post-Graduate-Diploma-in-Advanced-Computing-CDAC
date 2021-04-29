import java.util.Scanner;
import java.util.Arrays;
 
class Main {
    public static void main(String[] args) {
         
        String[] runner;
        String record;
        int[] timefinished;
              
        runner = new String[10];
        timefinished = new int[10];
         
        System.out.println("Marathon program");
         
        Scanner input = new Scanner (System.in);
            for(int i = 0; i < 10; i++) {
                System.out.print( "Enter Name of Runner: " );
                runner[i] = input.next();
                System.out.print( "Enter time of Runner finished: " );
                timefinished[i] = input.nextInt();
                 }

            for(int i=0;i<timefinished.length;i++)
              {
                 for(int j=i+1;j<timefinished.length;j++)
                  {
                     if(timefinished[i]>timefinished[j]){
                       int time=timefinished[i];
                       timefinished[i]=timefinished[j];
                       timefinished[j]=time;

                      String name=runner[i];
                      runner[i]=runner[j];
                      runner[j]=name;

                  }
              }
            }

            System.out.println("\nThe Ranks are :\n");
           
             
            for(int j = 0; j < 3; j++) {
                if(j==0){
                record ="Rank 1 " + runner[j] + " with " + timefinished[j] + " minutes";
                System.out.println( record );}
                else if(j==1){
                record ="Rank 2 " + runner[j] + " with " + timefinished[j] + " minutes";
                System.out.println( record );}
                else if(j==2){
                record ="Rank 3 " + runner[j] + " with " + timefinished[j] + " minutes";
                System.out.println( record );};
        }
         
    }       
}
