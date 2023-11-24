/*package whatever //do not write package name here */

import java.io.*;

class RectangleSum {
    public static void preSumRow(int[][] arr){
        for(int i=0;i<arr.length;i++){
            for(int j=1;j<arr[i].length;j++)
                arr[i][j]+=arr[i][j-1];
        }
        
    }
    public static void preSumCol(int[][] arr){
        for(int j=0;j<arr[0].length;j++){
            for(int i=1;i<arr.length;i++){
                arr[i][j]+=arr[i-1][j];
            }
        }
    }
    public static int findSum(int[][] arr,int r1, int c1,int r2,int c2){
        preSumRow(arr);
        preSumCol(arr);
        return arr[r2][c2]-arr[r1-1][c2]-arr[r2][c2-1]+arr[r1-1][c1-1];
    }
    static int[][] generateSpiral(int n) {
    int[][] arr = new int[n][n];
    int total = 1;
    int top = 0, right = n - 1, bottom = n - 1, left = 0;

    while (total <= n * n) {
        for (int j = left; j <= right && total <= n * n; j++) {
            arr[top][j] = total++;
        }

        if (total > n * n) {
            break;
        }

        top++;

        for (int i = top; i <= bottom && total <= n * n; i++) {
            arr[i][right] = total++;
        }

        if (total > n * n) {
            break;
        }

        right--;

        for (int j = right; j >= left && total <= n * n; j--) {
            arr[bottom][j] = total++;
        }

        if (total > n * n) {
            break;
        }

        bottom--;

        for (int i = bottom; i >= top && total <= n * n; i--) {
            arr[i][left] = total++;
        }

        if (total > n * n) {
            break;
        }

        left++;
    }

    return arr;
}

	public static void main (String[] args) {
		int[][] arr=generateSpiral(5);
		System.out.println(findSum(arr,1,1,4,4));
	}
}