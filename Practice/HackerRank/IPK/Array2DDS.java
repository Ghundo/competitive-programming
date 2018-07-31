/**
 * author: marcavenzaid
 * created: Jul 30, 2018
 */

package arrays;

import java.io.*;
import java.util.*;

public class Array2DDS {
	
	static int hourglassSum(int[][] arr) {
		int maxSum = -9 * 7;
		for (int i = 0; i < 6-2; ++i) {
			for (int j = 0; j < 6-2; ++j) {
				int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
				if (sum > maxSum) {
					maxSum = sum;
				}
			}
		}
		return maxSum;
	}	
	
	private static final Scanner scanner = new Scanner(System.in);
	
	public static void main(String[] args) throws IOException {
		int[][] arr = new int[6][6];
		for (int i = 0; i < 6; ++i) {
			String[] rowi = scanner.nextLine().split(" ");
			scanner.skip("(\\r\\n|[\\n\\r\\u2028\\u2029\\u0085])?");
			for (int j = 0; j < 6; ++j) {
				int arrItem = Integer.parseInt(rowi[j]);
				arr[i][j] = arrItem;
			}
		}
		scanner.close();
		System.out.println(hourglassSum(arr));
	}
}
