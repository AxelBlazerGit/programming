import java.util.*;
public class SystemsNumber{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("1. Binary -> Decimal.");
        int choice=s.nextInt();
        switch(choice){
            case 1:
            System.out.print("Enter a Binary Number ");
            int bin=s.nextInt(),dec=0,pow=1;
            while(bin>0){
                dec+=(bin%10)*pow;
                pow*=2;
                bin/=10;
            }
            System.out.println("Decimal Equivalent: "+dec);
            break;
            default:
            System.out.println("Invalid Input");

        }
        s.close();
        System.out.println("Program Exited.");
    }
}