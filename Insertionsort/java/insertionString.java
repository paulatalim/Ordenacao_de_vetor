public class insertionString {
    public static void insertionsort (String[] vet) {
		for (int i = 1; i < vet.length; i++) {
			String temp = new String (vet[i]);
			int j = i - 1;

			while (j>=0 && vet[j].toUpperCase().compareTo(temp.toUpperCase()) > 0) {
				vet[j+1] = vet[j];
				j--;
			}

			vet[j+1] = temp;
		}
	}
}
