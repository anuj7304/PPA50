import java.util.*;

class Assignment28_7
{
    public static void main(String Arg[])
    {
        int iCount = 0;  
        Scanner sobj = new Scanner(System.in);  
        System.out.print("Enter the number of elements you want to store: ");  

        iCount = sobj.nextInt();  

        int[] array = new int[iCount];  
        System.out.println("Enter the elements of the array: ");
        for(int iCnt=0; iCnt<iCount; iCnt++)  
        {  
            array[iCnt]=sobj.nextInt();  
        }  
        System.out.println("Array elements are: ");  
        
        for (int iCnt=0; iCnt<iCount; iCnt++)   
        {  
            System.out.println(array[iCnt]);
        }
    }
}