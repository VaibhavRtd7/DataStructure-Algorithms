# 🧵 Java Threading and Multithreading Guide

Welcome to the complete guide on **Threading and Multithreading in Java**. This README covers everything from basic concepts to real-world examples with code, making it perfect for interview prep and understanding concurrency in Java.

---

## 📚 Table of Contents

- [What is a Thread?](#what-is-a-thread)
- [What is Multithreading?](#what-is-multithreading)
- [Why Multithreading?](#why-multithreading)
- [Creating Threads in Java](#creating-threads-in-java)
  - [Using `Thread` Class](#1-using-thread-class)
  - [Using `Runnable` Interface](#2-using-runnable-interface)
- [Thread Lifecycle](#thread-lifecycle)
- [Common Thread Methods](#common-thread-methods)
- [Multithreading Example](#multithreading-example)
- [Thread Sleep and Join](#thread-sleep-and-join)
- [Real-World Use Cases](#real-world-use-cases)
- [Important Notes](#important-notes)

---

## 🧠 What is a Thread?

A **Thread** is the smallest unit of execution in a program. It is a lightweight process that runs inside the Java Virtual Machine (JVM). A thread executes a set of instructions independently from other threads.

---

## 🚀 What is Multithreading?

**Multithreading** is the process of executing **two or more threads simultaneously** to maximize CPU utilization and performance.

**Benefits:**
- Efficient use of system resources
- Improved performance
- Non-blocking user experience
- Useful in real-time systems (e.g., games, servers)

---

## 💡 Why Multithreading?

Multithreading enables Java programs to:
- Perform multiple operations at the same time
- Keep the UI responsive (e.g., downloading a file in the background)
- Handle multiple user requests in web applications

---

## 🧰 Creating Threads in Java

There are **two main ways** to create threads in Java:

### ✅ 1. Using `Thread` Class

```java
class MyThread extends Thread {
    public void run() {
        System.out.println("Thread is running...");
    }

    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        t1.start();
    }
}
```

### ✅ 2. Using Runnable Interface
```
class MyRunnable implements Runnable {
    public void run() {
        System.out.println("Thread running via Runnable interface.");
    }

    public static void main(String[] args) {
        MyRunnable r1 = new MyRunnable();
        Thread t1 = new Thread(r1);
        t1.start();
    }
}
```

# 🔁 Java Thread Lifecycle & Thread Methods

This guide explains the **lifecycle of a thread** in Java and details the **most commonly used thread methods** every Java developer should know. Understanding thread states and methods is crucial for building efficient multithreaded applications.

---


## 🔄 Thread Lifecycle


A **thread** in Java moves through multiple states from its creation to termination. The Java Virtual Machine (JVM) and thread scheduler manage these transitions.

### 🧵 Thread States:

| State                      | Description                                                                 |
|----------------------------|-----------------------------------------------------------------------------|
| **New**                    | Thread is created but not yet started (`new Thread()`)                      |
| **Runnable**               | Thread is ready to run and waiting for CPU time                            |
| **Running**                | Thread is currently executing                                               |
| **Waiting / Blocked / Sleeping** | Thread is temporarily inactive. It may be waiting for another thread, blocked by a lock, or put to sleep |
| **Terminated / Dead**      | Thread has finished execution or is stopped                                |

> ✅ Transition between these states is managed by the JVM, OS scheduler, and method calls like `sleep()` or `join()`.

---


## 🛠️ Common Thread Methods

Java provides built-in methods in the `Thread` class to manage and control thread behavior:

| Method             | Description                                                         |
|--------------------|---------------------------------------------------------------------|
| `start()`          | Starts a new thread and calls its `run()` method                    |
| `run()`            | Contains the code that is executed by the thread                    |
| `sleep(milliseconds)` | Pauses thread execution for specified time                       |
| `join()`           | Waits for a thread to die (finish executing)                        |
| `isAlive()`        | Checks whether a thread is still running or has terminated          |
| `setPriority(int)` | Sets thread priority (1 = MIN, 5 = NORM [default], 10 = MAX)        |

---


## 🧪 Example: Thread Lifecycle and Methods

```java
class MyThread extends Thread {
    public void run() {
        try {
            Thread.sleep(1000);
            System.out.println("Thread is running...");
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }

    public static void main(String[] args) {
        MyThread t1 = new MyThread();
        System.out.println("Is thread alive? " + t1.isAlive()); // false
        t1.start();
        System.out.println("Is thread alive after start()? " + t1.isAlive()); // true

        try {
            t1.join(); // wait for t1 to finish
        } catch (InterruptedException e) {
            System.out.println(e);
        }

        System.out.println("Thread has finished.");
    }
}
```


# 🌍 Real-World Use Cases of Threads in Java

Multithreading is essential in modern applications where multiple tasks must be performed concurrently. Below are some real-world examples of where threads are widely used:


## ✅ Common Use Cases

- **🌐 Web Servers**  
  Handle multiple user/client requests at the same time (e.g., each request on its own thread).

- **🎮 Games**  
  Separate threads for player movement, rendering graphics, AI decision-making, background music, etc.

- **⬇️ File Downloaders**  
  Download multiple files simultaneously with different threads.

- **🎵 Music/Video Players**  
  Stream audio/video in one thread while loading playlists, lyrics, subtitles, etc., in others.

- **🖥️ Background Tasks**  
  Desktop/mobile applications use threads for:
  - Auto-saving data
  - Sending notifications
  - Syncing with servers

---


# ⚠️ Important Notes on Threading

- 🚫 **Java does not support multiple inheritance with classes**, so if your class already extends another class, use `Runnable` instead of extending `Thread`.

- ✅ Always use `.start()` to begin thread execution.  
  ❌ **Do not call `.run()` directly**, as it won’t create a new thread.

- 🛡️ Use the `synchronized` keyword when threads access **shared resources**, to prevent **race conditions** and ensure **thread safety**.

- 🎚️ **Thread priority** can affect execution scheduling (via `setPriority()`), but **it’s not guaranteed** by all JVMs.

---



# 📎 Thread vs Runnable: Quick Comparison

| Feature             | `Thread` Class                            | `Runnable` Interface                     |
|---------------------|--------------------------------------------|-------------------------------------------|
| **Inheritance**     | Not suitable if extending another class    | Ideal when you need multiple inheritance  |
| **Flexibility**     | Less flexible                              | More flexible and reusable                |
| **Memory Overhead** | Higher (because of Thread object overhead) | Lower                                     |

---



# 🙌 Conclusion

Threading and Multithreading are essential for building:

- 🏃 Fast
- ⚖️ Scalable
- 🧠 Responsive

applications in Java.

They allow you to perform **parallel tasks**, improve **performance**, and ensure a smooth **user experience**.

> ✅ Practice writing **thread-safe**, **efficient**, and **well-structured** multithreaded programs using both `Thread` and `Runnable`.

---


