
package fibonacciiniterative;


import java.util.Scanner;
public class FibonacciInIterative{
	public static int fib(int n)
	{
		int[] f = new int[n+1];
		f[0] = 0;
		f[1] = 1;
		for(int i=2; i<=n; i++){
			f[n] = f[n-1] + f[n-2];
		}
		return f[n];
	}
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int n;
		while(true){
			n = input.nextInt();
			if(n<=0) break;
			System.out.println(fib(n));
		}
	}
}
