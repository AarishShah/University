public class ThisKeyword {

    int a;

    public int val(int a) {
        this.a = a;
        return a;
    }

    public static void main(String[] args)

    {
        ThisKeyword s = new ThisKeyword();
        s.val(10);          
        System.out.println(s.a);
    }
}
