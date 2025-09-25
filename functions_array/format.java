import java.util.ArrayList;
import java.util.Scanner;

class format {
    static ArrayList<Float> divisionWithPrecision(float a, float b) {
        ArrayList<Float> res = new ArrayList<>();
        float exact = a / b;
        res.add(exact);
        res.add(Float.parseFloat(String.format("%.3f", exact)));
        return res;
    }

    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        float a = sc.nextFloat();
        float b = sc.nextFloat();
        ArrayList<Float> ans = divisionWithPrecision(a, b);
        System.out.println(ans);
    }
}
