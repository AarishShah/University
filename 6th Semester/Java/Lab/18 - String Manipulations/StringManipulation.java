public class StringManipulation {
    public static void main(String[] args) {
        String input = "Hello, World!";
        String lowercase = input.toLowerCase();
        String replaced = lowercase.replace(" ", "_");
        
        System.out.println("Original string: " + input);
        System.out.println("String in lowercase: " + lowercase);
        System.out.println("String with spaces replaced: " + replaced);
    }
}
