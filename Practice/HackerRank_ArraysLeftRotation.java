/**
 * author: marcavenzaid
 * created: Jul 30, 2018
 */

package arrays;

import java.io.*;
import java.util.*;

public class ArraysLeftRotation {
	
	static int[] rotLeft(int[] a, int d) {
		int n = a.length;
		int[] b = new int[n];
		System.arraycopy(a, d, b, 0, n-d);
		System.arraycopy(a, 0, b, n-d, d);
		return b;
	}
	
	private static final Scanner scanner = new Scanner(System.in);
	
	public static void main(String[] args) throws IOException {
		String[] inputnd = scanner.nextLine().split(" ");
		int n = Integer.parseInt(inputnd[0]);
		int d = Integer.parseInt(inputnd[1]);
		int[] a = new int[n];
		String[] aInputs = scanner.nextLine().split(" ");
		scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
		scanner.close();
		for (int i = 0; i < n; ++i) {
			int input = Integer.parseInt(aInputs[i]);
			a[i] = input;
		}
		int[] result = rotLeft(a, d);
		for (int i = 0; i < n; ++i) {
			System.out.print(result[i] + " ");
		}
	}
}
