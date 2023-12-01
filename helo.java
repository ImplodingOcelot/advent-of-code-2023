public class Main {
    public static void main(String[] args) {
        // for loops run through a block of code a number of times
        // in this example it runs through beginning at 'initial' and ending at 'end'
        int initial = 0;
        int end = 5;
        for (int i = initial; i < end; i++) {
            System.out.println(i);
        }
        // this loops through an array, no matter the length
        String[] cars = {"Volvo", "BMW", "Ford", "Mazda"};
        for (String i : cars) {
            System.out.println(i);
        }
        // loop through a string
        String txt = "Hello World";
        for (char i : txt.toCharArray()) {
            System.out.println(i);
        }
        // this sums a number (here 'sum') with a for loop
        // i.e. 0 + 1 + 2 + 3 + 4 = 10
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += i;
        }
        System.out.println(sum);
        // and this one with a thile loop
        // i.e. 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36
        int sum2 = 0;
        int i = 0;
        while (i < 9) {
            sum2 += i;
            i++;
        }
        System.out.println(sum2);
        // sum a number with a do while loop
        // difference here is that the condition is checked at the end of the loop
        int sum3 = 0;
        int j = 0;
        do {
            sum3 += j;
            j++;
        } while (j < 5);
        // so this do-while is equivalent to this for loop
        int sum4 = 0;
        for (int k = 0; k < 5; k++) {
            sum4 += k;
        }
        // and this while loop
        int sum5 = 0;
        int l = 0;
        while (l < 5) {
            sum5 += l;
            l++;
        }
        // break and continue
        // break stops the loop
        // continue skips the current iteration
        for (int m = 0; m < 10; m++) {
            if (m == 4) {
                break;
            }
            System.out.println(m);
        }
        for (int n = 0; n < 10; n++) {
            if (n == 4) {
                continue;
            }
            System.out.println(n);
        }
    }
}