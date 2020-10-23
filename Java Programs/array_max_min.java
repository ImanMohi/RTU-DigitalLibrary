package com.company;

import java.util.Scanner;

public class array_max_min {

    public static void main(String[] args) {
        int c;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements you want to store: ");
        int n = sc.nextInt();
        if (n <= 0) {
            System.out.print("Wrong input!");
            System.exit(0);
        } else {
            int a[] = new int[n];

            for (; ; ) {
                System.out.println("\n\t\t1. Enter values in Array.\n\t\t2. Display array elements.\n\t\t3. Find maximum element in array.\n\t\t4. Find minimum element in array.\n\t\t5. Exit.");
                c = sc.nextInt();

                switch (c) {
                    case 1:
                        System.out.println("Enter the elements of the array: ");
                        for (int i = 0; i < n; i++) {
                            a[i] = sc.nextInt();
                        }
                        break;

                    case 2:
                        System.out.println("Array elements are: ");
                        for (int i = 0; i < n; i++) {
                            System.out.print(a[i] + " ");
                        }
                        break;
                    case 3:
                        int max = 0;
                        for (int i = 0; i < n - 1; i++) {
                            if (a[i] > a[i + 1])
                                max = a[i];
                        }
                        System.out.println("Maximum Array element is: " + max);
                        break;
                    case 4:
                        int min = 0;
                        for (int i = 0; i < n - 1; i++) {
                            if (a[i] < a[i + 1])
                                min = a[i];
                        }
                        System.out.println("Minimum Array element is: " + min);
                        break;

                    case 5:
                        System.exit(0);
                }
            }
        }
    }

}
