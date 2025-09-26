import java.util.*;
public class set {
    public static void main(String[] args) {
        HashSet <Integer> set = new HashSet<>();
        set.add(1);
        set.add(2);
        set.add(3);
        set.add(4);

        if(set.contains(3)){
            System.out.println("exists");
        }
        else{
            System.err.println("doesnot exists");
        }
        set.remove(1);

        System.out.println("Size of set "+set.size());
    }
}
