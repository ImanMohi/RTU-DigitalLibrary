package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class array_move_negative {

    public static void movetoend(int arr[]) {
        int n= arr.length;
        int temp[] = new int[n];
        int j=0;
        for(int i=0;i<n;i++) {
            if (arr[i] >= 0) {
                temp[j++] = arr[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                temp[j++]=arr[i];
            }
        }

        for (int i = 0; i < n; i++)
            arr[i] = temp[i];

    }
    public static void movetofront(int arr[]) {
        int n= arr.length;
        int temp[] = new int[n];
        int j=0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                temp[j++]=arr[i];
            }
        }
        for(int i=0;i<n;i++) {
            if (arr[i] >= 0) {
                temp[j++] = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
            arr[i] = temp[i];

    }


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
            System.out.println("Enter the elements of the array: ");
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            System.out.println("The actual array: \n" + Arrays.toString(a));
            System.out.println("\n\t\t1. Move negative elements to front.\n\t\t2. Move negative elements to end.");
            c = sc.nextInt();

            switch (c) {
                case 1:
                    movetofront(a);
                    System.out.println("The rearranged array: \n" + Arrays.toString(a));
                    break;

                case 2:
                    movetoend(a);
                    System.out.println("The rearranged array: \n" + Arrays.toString(a));
                    break;
                default: System.out.println("Wrong input!");
                break;

            }
        }
    }
}
