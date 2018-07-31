/**
 * author: marcavenzaid
 * created: Jul 30, 2018
 */

package arrays;

import java.util.*;

public class NewYearChaos {

	static void minimumBrides(int[] q) {
		int n = q.length;
		int brides = 0;
		for (int i = n-1; i >= 0; --i) {			
			if (q[i]-1-i > 2) {
				System.out.println("Too chaotic");
				return;
			}
			int j = q[i]- 2;
			j = (j < 0) ? 0 : j;
			for (int k = j; k < i; ++k) {
				if (q[k] > q[i]) {
					++brides;
				}
			}
		}
		System.out.println(brides);
	}
	
	private static final Scanner scanner = new Scanner(System.in);
	
	public static void main(String[] args) {
		int t = scanner.nextInt();
		scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
		for (int ti = 0; ti < t; ++t) {
			int n = scanner.nextInt();
			scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
			int[] q = new int[n];
			String[] qInputs = scanner.nextLine().split(" ");
			for (int i = 0; i < n; ++i) {
				int input = Integer.parseInt(qInputs[i]);
				q[i] = input;
			}
			minimumBrides(q);
		}
		scanner.close();
	}
}
