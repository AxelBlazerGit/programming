import java.util.Scanner;

public class ArrMagic {
    public static String isMagicArray(int[][] arr) {
        if (arr == null || arr.length == 0 || arr[0].length == 0) {
            return "Not";
        }

        int size = arr.length;

        // Sum of the first row
        int rowSum = 0;
        for (int element : arr[0]) {
            rowSum += element;
        }

        // Magic check for rows
        for (int i = 1; i < size; i++) {
            int currentRowSum = 0;
            for (int element : arr[i]) {
                currentRowSum += element;
            }
            if (currentRowSum != rowSum) {
                return "Not";
            }
        }

        // Magic check for columns
        for (int col = 0; col < size; col++) {
            int colSum = 0;
            for (int row = 0; row < size; row++) {
                colSum += arr[row][col];
            }
            if (colSum != rowSum) {
                return "Not";
            }
        }

        // Magic check for diagonal
        int mainDiagonalSum = 0;
        for (int i = 0; i < size; i++) {
            mainDiagonalSum += arr[i][i];
        }
        if (mainDiagonalSum != rowSum) {
            return "Not";
        }

        // Magic check for other diagonal
        int secondaryDiagonalSum = 0;
        for (int i = 0; i < size; i++) {
            secondaryDiagonalSum += arr[i][size - 1 - i];
        }

        return secondaryDiagonalSum == rowSum ? "Input is" : "Not";
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the square array: ");
        int size = scanner.nextInt();

        int[][] array2D = new int[size][size];

        System.out.println("\nEnter the elements of the square array:");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                System.out.print("Element at position [" + (i + 1) + "][" + (j + 1) + "]: ");
                array2D[i][j] = scanner.nextInt();
            }
        }

        System.out.println(isMagicArray(array2D)+" a Magic Array!");

        scanner.close();
    }
}


//using arraylist

// import java.util.ArrayList;
// import java.util.Scanner;

// public class ArrMagic {
//     public static String isMagicArray(ArrayList<ArrayList<Integer>> arrList) {
//         if (arrList == null || arrList.isEmpty() || arrList.get(0).isEmpty()) {
//             return "Not";
//         }

//         int size = arrList.size();

//         // Sum of the first row
//         int rowSum = 0;
//         for (int element : arrList.get(0)) {
//             rowSum += element;
//         }

//         // Magic check for rows
//         for (int i = 1; i < size; i++) {
//             int currentRowSum = 0;
//             for (int element : arrList.get(i)) {
//                 currentRowSum += element;
//             }
//             if (currentRowSum != rowSum) {
//                 return "Not";
//             }
//         }

//         // Magic check for columns
//         for (int col = 0; col < size; col++) {
//             int colSum = 0;
//             for (ArrayList<Integer> row : arrList) {
//                 colSum += row.get(col);
//             }
//             if (colSum != rowSum) {
//                 return "Not";
//             }
//         }

//         // Magic check for diagonal
//         int mainDiagonalSum = 0;
//         for (int i = 0; i < size; i++) {
//             mainDiagonalSum += arrList.get(i).get(i);
//         }
//         if (mainDiagonalSum != rowSum) {
//             return "Not";
//         }

//         // Magic check for other diagonal
//         int secondaryDiagonalSum = 0;
//         for (int i = 0; i < size; i++) {
//             secondaryDiagonalSum += arrList.get(i).get(size - 1 - i);
//         }

//         return secondaryDiagonalSum == rowSum ? "Input is" : "Not";
//     }

//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);

//         System.out.print("Enter the size of the square array: ");
//         int size = scanner.nextInt();

//         ArrayList<ArrayList<Integer>> arrayList2D = new ArrayList<>();

//         System.out.println("\nEnter the elements of the square array:");
//         for (int i = 0; i < size; i++) {
//             ArrayList<Integer> row = new ArrayList<>();
//             for (int j = 0; j < size; j++) {
//                 System.out.print("Element at position [" + (i + 1) + "][" + (j + 1) + "]: ");
//                 row.add(scanner.nextInt());
//             }
//             arrayList2D.add(row);
//         }

//         System.out.println(isMagicArray(arrayList2D) + " a Magic Array!");

//         scanner.close();
//     }
// }

