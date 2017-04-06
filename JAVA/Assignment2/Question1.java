/*
1) initialize a single dimension array and sort it in ascending order.
*/
public class Question1 {
	public static void main(String[] args) {
		int arr[] = {5,1,8,90,12};
		int temp = 0;
		for (int i = 0; i < arr.length; i++) {
			for (int j = 1; j < arr.length - i; j++) {
				if(arr[j-1] > arr[j]){  
                    //swap elements  
                    temp = arr[j-1];  
                    arr[j-1] = arr[j];  
                    arr[j] = temp;  
                }  
			}
		}

		for(int i=0; i < arr.length; i++){  
            System.out.print(arr[i] + " ");  
        }
	}
}