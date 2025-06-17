class MyRunnable implements Runnable {
      public void run() {
         System.out.println("Thread is running");
     }
     
     public static void main(String[] args) {
         
        MyRunnable r1 = new MyRunnable();
        Thread t1 = new Thread(r1); 
        t1.start(); 
    }
}

