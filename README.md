
---

# 🧠 MiniTalk

MiniTalk is a minimalist client-server application that leverages UNIX signals for inter-process communication (IPC). It's a hands-on exploration of how processes can "talk" to each other using `SIGUSR1` and `SIGUSR2`.

---

## 🚀 Project Overview

This project is part of the 42 curriculum, aiming to deepen your understanding of:

* **UNIX Signals**: Using `SIGUSR1` and `SIGUSR2` to transmit data.
* **Bitwise Operations**: Encoding and decoding characters at the bit level.
* **Process Communication**: Establishing a basic protocol for message exchange between processes.

---

## 🛠️ How It Works

### Server

* **Initialization**: Run the server to start listening for incoming signals. It will display its Process ID (PID), which the client needs to send messages.
* **Signal Handling**: The server sets up handlers for `SIGUSR1` and `SIGUSR2`. Each signal represents a binary digit (`1` or `0`).
* **Message Reconstruction**: As signals arrive, the server reconstructs the original message bit by bit and displays it.

### Client

* **Message Encoding**: The client takes a string message and converts each character into its binary representation.
* **Signal Transmission**: For each bit, the client sends a signal (`SIGUSR1` for `1`, `SIGUSR2` for `0`) to the server's PID.
* **Timing**: A short delay (`usleep`) ensures the server has time to process each signal.

---

## 🧪 Usage

1. **Compile the Project**:

   ```bash
   make
   ```

2. **Start the Server**:

   ```bash
   ./server
   ```

   * Note the PID displayed; you'll need it for the client.

3. **Send a Message with the Client**:

   ```bash
   ./client <server_pid> "Your message here"
   ```

   * Replace `<server_pid>` with the actual PID from the server.
   * Example:

     ```bash
     ./client 12345 "Hello, MiniTalk!"
     ```

---

## 🧠 Learning Points

* **Signal-Based IPC**: Understanding how UNIX signals can be used beyond simple notifications.
* **Bit-Level Data Handling**: Gaining proficiency in bitwise operations and data encoding.
* **Process Synchronization**: Managing timing and synchronization between processes.

---

## 📁 Project Structure

* `ft_server.c`: Server implementation.
* `ft_client.c`: Client implementation.
* `minitalk.h`: Header file with shared definitions.
* `Makefile`: For compiling the project.

---

## 📚 References

* [UNIX Signal Handling](https://man7.org/linux/man-pages/man7/signal.7.html)
* [Bitwise Operations in C](https://en.wikipedia.org/wiki/Bitwise_operations_in_C)

---


