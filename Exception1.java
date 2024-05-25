import java.util.Scanner;

class Exception1 
{
    public  static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First number : ");
        int No1 = sobj.nextInt();

        System.out.println("Enter Second number : ");
        int No2 = sobj.nextInt();

        float Ans = No1 / No2;
        System.out.println("Division is : "+ Ans);
    }
}