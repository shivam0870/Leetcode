class Solution {
    public int findSpecialInteger(int[] arr) {
      int size = arr.length;
		int count = 0;
		if (size == 1)
			return arr[0];

		for (int i = 0; i < size - 1; i++) {
			if (arr[i] == arr[i + 1]) {
				count++;
				if (count >= size / 4)
					return arr[i];
			} else {
				count = 0;
				continue;
			}
		}
		return arr[0];   
    }
}