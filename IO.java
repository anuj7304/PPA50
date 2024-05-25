import java.util.*;

class IO 
{
    public  static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First number : ");
        int No1 = sobj.nextInt();

        System.out.println("Enter Second number : ");
        int No2 = sobj.nextInt();

        int Ans = No1 + No2;
        System.out.println("Addition is : "+ Ans);
    }
}