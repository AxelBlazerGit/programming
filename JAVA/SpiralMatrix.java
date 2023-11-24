public class SpiralMatrix {
    static void printArr(int[][] arr){
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[0].length;j++)
                System.out.print(arr[i][j]+ "   ");
            System.out.println();
        }
    }
    static int[][] generateSpiral(int n){
        int[][] arr=new int[n][n];
        int top=0,rt=n-1,bot=n-1,lt=0,total=1;

        while(total<=n*n){

            for(int j=lt ; j<=rt && total<=n*n ; j++){
                arr[top][j]=total++;}
            top++;
            
            for(int i=top;i<=bot && total<=n*n;i++){
                arr[i][rt]=total++;}
            rt--;

            for(int j=rt;j>=lt && total<=n*n;j--){
                arr[bot][j]=total++;}
            bot--;
            
            for(int i=bot;i>=top && total<=n*n;i--){
                arr[i][lt]=total++;}
            lt++; 
            }
        return arr;
    }
    static void printSpiral(int[][] arr, int r , int c){
        int top=0,bot=r-1,rt=c-1,lt=0,total=0;
        while(total<r*c){

            for(int j=lt;j<=rt && total<r*c ;j++){
                System.out.print(arr[top][j]+"   ");
                total++;}
            top++;
            
            for(int i=top;i<=bot && total<r*c;i++){
                System.out.print(arr[i][rt]+"   ");
                total++;}
            rt--;

            for(int j=rt;j>=lt && total<r*c;j--){
                System.out.print(arr[bot][j]+"   ");
                total++;}
            bot--;

            for(int i=bot;i>=top && total<r*c;i--){
                System.out.print(arr[i][lt]+"   ");
                total++;}
            lt++;

        }
    } 
    
    public static void main(String[] args){
    printArr(generateSpiral(5));
    }
}

