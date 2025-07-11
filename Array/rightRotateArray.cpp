    void rotate(vector<int>& arr, int k) {
        // Rotate Array by k steps right 
        int n=arr.size();
        k = k % n;
        if (n == 0 || k==0)
            return;

        int temp[k];
        for (int i = n - k; i < n; i++) {
            temp[i - n + k] = arr[i];
        }

        for (int i = n - k - 1; i >= 0; i--) {
            arr[i + k] = arr[i];
        }

        for (int i = 0; i < k; i++) {
            arr[i] = temp[i];
        }
    }
