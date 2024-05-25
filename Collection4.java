// Hashtable

import java.util.*;

class Collection4
{
    public static void main(String Arg[])
    {
        HashTable <String, Integer> hobj = new HashTable<String , Integer>();

        hobj.put("PPA",19500);
        hobj.put("LB",20000);
        hobj.put("Python",20500);
        hobj.put("Angular",21000);

        System.out.println(hobj);
    }
}