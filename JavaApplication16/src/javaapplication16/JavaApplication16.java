/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication16;

import java.util.Scanner;

/**
 *
 * @author hieuy
 */
public class JavaApplication16 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("Nap so hang m= ");
        int m = sc.nextInt();
        System.out.printf("Nap so cot n= ");
        int n = sc.nextInt();
        System.out.println("Nap vao ma tran: ");
        int [][]a = new int[m][n];
        for (int i = 0;i<m;i++){
            for(int j = 0 ; j< n ;j++){
                System.out.printf("a["+i+"]["+j+"]=");
                a[i][i]=sc.nextInt();
            }
        }
        int sum = 0;
        for (int i = 0;i<m;i++) {
            for (int j = 0; j < n; j++) {
                    sum+=a[i][j];
            }
        }
        for (int i = 0;i<m;i++){
            for (int j = 0; j < n; j++){
                System.out.printf(a[i][j]+ " ");
            }
            System.out.println();
        }
        System.out.println("Sum = "+sum);
    }
    }
